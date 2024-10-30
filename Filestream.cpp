#include<iostream>;
#include <fstram>;
#include<string>;
int main(){
    /*Writing to a file. output, reads from or writes t the file
    Will create the file if not found
    */
    ofstream outFile("output.txt");
    outFile<<"Writing to a file."<<endl;
    outfile.close();
    
    //Reading from a file
    ifstream inFile("output.txt");
    string content;
    while (std::getline(inFile, content))
    (
        /*cin>>
        cout<<*/
        cout<<content<<endl;
    )
    inFile.close(); //Close the file after reading its contents
    
    int main()
        
        outfile.close();
        
        //Redaing from outfile
        ifstram inFile("output.txt");
        string content;
        while (std::detline(infile, content))
        {
            cout <<content <<endl;
        
        }
        inFilew.close();//Close the file after reading its contents
        return0;
}
}