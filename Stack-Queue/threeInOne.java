public class Main {
    // Creating stack, top, starting and ending array as class variables
    static int stack[];
    static int top[];
    static int starting[];
    static int ending[];

    // Defining the size of an array
    static int max = 30;

    public static void main(String[] args) {
        stack = new int[max];
        top = new int[3];
        starting = new int[3];
        ending = new int[3];

        Main m = new Main();
        int k = 0;

        // Loop to initialize starting, ending and top of each array
        for (int i = 0; i < 3; i++) {
            starting[i] = k;
            top[i] = k;
            k = k + max / 3;
            ending[i] = k - 1;
        }

        // Pushing values on different stacks
        m.push(10, 1);
        m.push(1, 0);
        m.push(100, 2);
        m.push(200, 2);
        m.push(2, 0);
        m.push(20, 1);

        // Displaying the content
        m.display();

        // Popping the values
        m.pop(1);
        m.pop(2);

        // Display the content after pop
        m.display();
    }

    // Function to return the top of a given stack
    int gettop(int stno) {
        return top[stno];
    }

    // Push function to push value on the specified stack
    void push(int val, int stno) {

        if (gettop(stno) <= ending[stno]) {
            stack[top[stno]] = val;
            top[stno] = top[stno] + 1;
        } else {
            System.out.println("Stack is full");
        }
    }
    // Function to pop the value out from the specified stack 
    void pop(int stno) {
        if (gettop(stno) >= starting[stno]) {
            top[stno] = top[stno] - 1;
            System.out.println("\nValue popped out is " + stack[top[stno]]);
            stack[top[stno]] = 0;
        } else {
            System.out.println("Stack is empty");
        }
    }

    // Function to display the content of all stacks
    void display() {
        int j = 0;
        for (int i = 0; i < max; i++) {
            if (j < 3 && i == starting[j]) {
                System.out.println("\n\nPrinting stack " + j);
                j++;
            }
            System.out.print(stack[i] + " ");
        }
    }
}