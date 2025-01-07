class Task extends Thread {
    private String name;

    public Task(String name) {
        this.name = name;
    }

    public void run() {
        for (int i = 1; i <= 5; i++) {
            System.out.println(name + " is running: Step " + i);
            try {
                Thread.sleep(500); // Pause for 500ms
            } catch (InterruptedException e) {
                System.out.println("Thread interrupted");
            }
        }
    }
}

public class Main {
    public static void main(String[] args) {
        Task t1 = new Task("Thread 1");
        Task t2 = new Task("Thread 2");

        t1.start(); // Start thread 1
        t2.start(); // Start thread 2
    }
}
