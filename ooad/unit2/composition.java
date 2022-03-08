package ooad.unit2;

import java.util.*;

class player {
    public String name;
    public String role;

    player(String name, String role) {
        this.name = name;
        this.role = role;
    }
}

class team {
    private final List<player> players;

    team(List<player> players) {
        this.players = players;
    }

    public List<player> getTeam() {
        return players;
    }
}

public class composition {
    public static void main(String[] args) {
        player p1 = new player("Sachin", "batsman");
        player p2 = new player("Dhoni", "keeper");
        player p3 = new player("Virat", "quick bowler");
        player p4 = new player("Rohit", "batsman");
        List<player> players = new ArrayList<>();
        players.add(p1);
        players.add(p2);
        players.add(p3);
        players.add(p4);
        team t = new team(players);
        for (player p : t.getTeam()) {
            System.out.println(p.name + " is " + p.role);
        }
    }
}
