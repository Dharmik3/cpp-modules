  #include<iostream>
    using namespace std;
    class example2
    {
       int id;
       int value;
    public:
    //     example2 () {}
    //    example2(int x,int y){
    //      id=x;
    //      value=y;
    //    }
      void display(){
        cout<<"id "<<id<<endl;
        cout<<"value "<<value<<endl;
      }
      int& getid () // return by reference
      {
          return id;
      }

      int& getvalue () // return by reference
      {
         return value;
      }
    };
    class example1
    {
       int id;
       int numbers;
       int cost;
    public:
       example1(int a, int b, int c)
       {
         id=a;
         numbers=b;
         cost=c;
       }
       operator example2()
       {
        example2 temp;
        temp.getid()=id;
        temp.getvalue()=numbers*cost;
        return temp;
       }
    };
    int main()
    {
      example1 s1(100,5,140.0);
      example2 s2;
      s2=s1;
      s2.display();
      return 0;
    }