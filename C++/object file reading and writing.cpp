#include <iostream>
#include <fstream>

using namespace std;

class student
{
    private:
        char name[30];
        int age;
    public:
        void getData(void)
        { cout<<"Enter name:"; cin>>name;
          cout<<"Enter age:"; cin>>age;
        }

        void showData(void)
        {
        cout<<"Name:"<<name<<",Age:"<<age<<endl;
        }
};

int main()
{
    student s;
    ofstream file;
    //open file in write mode
    file.open("a.txt",ios::out);
    if(!file)
    {
      cout<<"Error in creating file.."<<endl;
      return 0;
    }
    //write into file
    s.getData();    //read from user
    file.write((char*)&s,sizeof(s));    //write into file

    file.close();   //close the file
    cout<<"\nFile saved and closed successfully."<<endl;

    //re open file in input mode and read data
    //open file1
    ifstream file1;
    //again open file in read mode
    file1.open("a.txt",ios::in);
    if(!file1){
        cout<<"Error in opening file..";
        return 0;
    }
    //read data from file
    file1.read((char*)&s,sizeof(s));

    //display data on monitor
    s.showData();
    //close the file
    file1.close();

    return 0;
}
