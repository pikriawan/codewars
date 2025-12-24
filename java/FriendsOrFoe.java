/**
 * Tanggal: 25 Desember 2025
 * Link: https://www.codewars.com/kata/55b42574ff091733d900002f/train/java
 */

import java.util.ArrayList;
import java.util.List;

public class FriendsOrFoe {
    public static List<String> friend(List<String> persons) {
        List<String> friends = new ArrayList<>();

        for (String person : persons) {
            if (person.length() == 4) {
                friends.add(person);
            }
        }

        return friends;
    }

    public static void main(String[] args) {
        List<String> persons = new ArrayList<>();
        persons.add("Peter");
        persons.add("Ryan");
        persons.add("Yous");
        System.out.println(friend(persons));
    }
}
