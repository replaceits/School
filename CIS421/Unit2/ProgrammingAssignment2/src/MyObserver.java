package com.vogella.java.designpattern.observer;

import java.beans.PropertyChangeEvent;
import java.beans.PropertyChangeListener;

import com.vogella.java.designpattern.observer.MyModel;

// Class that listens to people in the MyModel class.
public class MyObserver implements PropertyChangeListener {
	// Tell MyModel that this listener (MyObserver) is now listening to it.
	public MyObserver(MyModel model) {
		model.addChangeListener(this);
	}

	// When a person in MyModel is updated, we will print out a message about it.
	@Override
	public void propertyChange(PropertyChangeEvent event) {
		System.out.println("Changed property: " + event.getPropertyName() + " [old -> "
				+ event.getOldValue() + "] | [new -> " + event.getNewValue() +"]");
	}
}
