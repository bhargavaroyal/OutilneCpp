import java.io.*;
  
class GFG {
    public static void main(String[] args)
    {
        System.out.println("GfG!");
  
        Dog dog = new Dog();
        dog.name = "Bull dog";
        dog.color = "Brown";
        dog.bark();
        dog.run();
  
        Cat cat = new Cat();
        cat.name = "Rag doll";
        cat.pattern = "White and slight brownish";
        cat.meow();
        cat.run();
  
        Animal animal = new Animal();
  
        animal.name = "My favourite pets";
  
        animal.run();
    }
}
  
class Animal {
    String name;
    public void run()
    {
  
        System.out.println("Animal is running!");
    }
}
  
class Dog extends Animal { 
  
/// the class dog is the child and animal is the parent
  
    String color;
    public void bark()
    {
        System.out.println(name + " Wooh ! Wooh !"
                           + "I am of colour " + color);
    }
}
  
class Cat extends Animal {
  
    String pattern;
  
    public void meow()
    {
        System.out.println(name + " Meow ! Meow !"
                           + "I am of colour " + pattern);
    }
}
