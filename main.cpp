#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   // ifstream myfile;
   //  myfile.open("w.txt");

      ifstream file("words.txt");
    string word;
    while(file >> word){
       // for(int i=0; i<=word[] i++;)
          int len=word.length();
          if(word.at(len-1)=='s'&& word.at(len-2)=='u'&&word.at(len-3)=='o'&& word.at(len-4)=='d' )
        cout<<word<<endl;
    }


       file.close();

  /*  int c = 0;
    string x= "marim";
    string y= "marty";
 for(int i=0; i<3; i++)
    {
       for(int j=0;j<3;j++)
        if(x[i]==y[j])
            c++;

    }
     if(c==3)
    cout<< "god"<<"\n";
        else
            cout<<"waksa"<<"\n";*/

    return 0;
}
