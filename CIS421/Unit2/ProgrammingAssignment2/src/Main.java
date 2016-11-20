package com.vogella.java.designpattern.observer;

import com.vogella.java.designpattern.observer.MyModel.Person;

public class Main {

	public static void main(String[] args) {
		MyModel model = new MyModel();
		MyObserver observer = new MyObserver(model);
		// we change the last name of the person, observer will get notified
		for (Person person : model.getPersons()) {
			person.setLastName(person.getLastName() + "1");
		}
		// we change the name of the person, observer will get notified
		for (Person person : model.getPersons()) {
			person.setFirstName(person.getFirstName() + "1");
		}
	}
}

/* 
 * ===BRIEF SCENARIO===
 * There are many different situations in which the observer pattern would be
 * beneficial to use over other design patterns. One case which I think would
 * fit well in this use case is to update clients connected to a server. If
 * new data comes in to the server that the clients need to know about (for
 * example: market price changes, weather updates, new articles, notifications,
 * etc.) then the server can notify all of the clients. In this case the server
 * is acting as the subject and the clients are acting as the observers.
 * 
 */

