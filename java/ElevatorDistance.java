/**
 * Tanggal: 25 Juli 2026
 * Link: https://www.codewars.com/kata/59f061773e532d0c87000d16/train/java
 */

public class ElevatorDistance {
    public static void main(String[] args) {
        System.out.println(elevatorDistance(new int[] {5, 2, 8}));
    }

    public static int elevatorDistance(int[] floors) {
        int currentFloor = floors[0];
        int totalDistance = 0;

        for (int i = 1; i < floors.length; i++) {
            int distance = Math.abs(floors[i] - currentFloor);
            totalDistance += distance;
            currentFloor = floors[i];
        }

        return totalDistance;
    }
}
