package com.vogella.java.designpattern.observer;

import java.beans.PropertyChangeEvent;
import java.beans.PropertyChangeListener;
import java.util.ArrayList;
import java.util.List;

// Class used to house Person objects and acts as a helper class between Person and Observer.
public class MyModel {
	// Strings used to notify listeners wether the first or last name was changed
	public static final String FIRSTNAME = "firstName";
	public static final String LASTNAME = "lastName";

	//List of all persons in MyModel
	private List<Person> persons = new ArrayList<Person>();
	//List of all listeners attached to 
	private List<PropertyChangeListener> listener = new ArrayList<PropertyChangeListener>();

	public class Person {

		private String firstName;

		private String lastName;

		public Person(String firstName, String lastName) {
			this.firstName = firstName;
			this.lastName = lastName;
		}

		public String getFirstName() {

			return firstName;
		}

		/*
		 * When a persons first name is changed we will notify all the
		 * observers attached to this person.
		 */
		public void setFirstName(String firstName) {
			notifyListeners(
					this,
					FIRSTNAME,
					this.firstName,
					this.firstName = firstName);

		}

		public String getLastName() {
			return lastName;
		}

		public void setLastName(String lastName) {
			/*
			 * When a persons last name is changed we will notify all the 
			 * observers attached to this person.
			 */
			notifyListeners(
					this,
					LASTNAME,
					this.lastName,
					this.lastName = lastName);
		}
	}

	public List<Person> getPersons() {
		return persons;
	}

	public MyModel() {
		// just for testing we hard-code the persons here:
		persons.add(new Person("Lars", "Vogel"));
		persons.add(new Person("Jim", "Knopf"));
	}

	private void notifyListeners(Object object, String property, String oldValue, String newValue) {
		// Notify all listeners that this person changed its `property` value.
		for (PropertyChangeListener name : listener) {
			name.propertyChange(new PropertyChangeEvent(this, property, oldValue, newValue));
		}
	}

	/* 
	 * Add a new listener to the list of listeners in order to update them in 
	 * the future.
	 */
	public void addChangeListener(PropertyChangeListener newListener) {
		listener.add(newListener);
	}

}
