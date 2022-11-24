ArrayList is one kind of container store the elements.
It can be generic or specific to the Objects.
e.g

ArrayList arr = new ArrayList();
It is as generic which can hold any type of objects.

ArrayList<Object> arr = new ArrayList<Object>();
This is specific type of Objec
e.g
ArrayList<Integer> arr = new ArrayList<Integer>();
which can hold only Integer values
If we try to put other values compiler will show error
See program no 2

except int other all types shows error that incompatible type. Even char is convertable to Integer because char is one datatype and Integer is
a class.

ArrayList is implemention of 'List' interface so it can be converted to the List reference
List is child of collection which is type of one interface and ArrayList is implimented from the List
See Program ListDemo
