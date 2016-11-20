JC=javac
JFLAGS=-d ./build -cp ./build

Unit2Assignment2: MyModel.class MyObserver.class Main.class
	echo "#!/bin/bash" > Unit2Assignment2.sh
	echo "java -cp build/ com.vogella.java.designpattern.observer.Main" >> Unit2Assignment2.sh
	chmod +x Unit2Assignment2.sh

MyModel.class: src/MyModel.java
	$(JC) $(JFLAGS) src/MyModel.java

MyObserver.class: src/MyObserver.java MyModel.class
	$(JC) $(JFLAGS) src/MyObserver.java

Main.class: src/Main.java MyObserver.class
	$(JC) $(JFLAGS) src/Main.java

clean:
	rm -rf ./build/* *.sh

