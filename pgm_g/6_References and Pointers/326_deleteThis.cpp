class A
{
  public:
    void fun()
    {
        delete this;
    }
};
  
int main()
{
  /* Following is Valid */
  A *ptr = new A;
  ptr->fun();
  ptr = NULL; // make ptr NULL to make sure that things are not accessed using ptr. 
  
  
  /* And following is Invalid: Undefined Behavior */
  A a;
  a.fun();
  
  getchar();
  return 0;
}
