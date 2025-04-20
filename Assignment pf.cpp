#include<iostream>
#include<fstream>
using namespace std;
int main()
{

	int age = 0;
	string str;
	cout << "Enter your age" << endl;
	cin >> age;
	cout << "Enter name:" << endl;
	cin >> str;
	ofstream output("info.txt");

	if (output.is_open())

	{

		output << "your name is :" << str << endl;
		output << "Your age is:" << age << endl;
		cout << "Info saved ";
		output.close();
	}
	else
	{
		cout << "Unable to open file.....plz try again" << endl;
	}
	return 0;
//}

//#include<iostream>
//#include<fstream>
//using namespace std;
//int main()
//{
//	//For writing text
//		int age = 0;
//	string str;
//	cout << "Enter your age" << endl;
//	cin >> age;
//	cout << "Enter name:" << endl;
//	cin >> str;
//	ofstream output("info.txt");
//
//	if (output.is_open())
//
//	{
//
//		output << "your name is :" << str << endl;
//		output << "Your age is:" << age << endl;
//		cout << "Info saved ";
//		output.close();
//	}
//	else
//	{
//		cout << "Unable to open file.....plz try again" << endl;
//	}
//	//for reading text 
//	ifstream reader("info.txt");
//	if (reader.is_open())
//	{
//		string str;
//		int age;
//		reader >> str;
//		reader >> age;
//		cout << age;
//		cout << str;
//		cout << "Messages Read" << endl;
//		reader.close();
//	}
//	else
//	{
//		cout << "Try Again";
//	}
//	system("pause");
//	return 0;
//}

//Question no 3:
//#include <iostream>
//#include <fstream>
//
//
//using namespace std;
//
//int main() {
//    string str;
//    int age;
//    char  selection='y';
//
//    while (selection == 'y' || selection == 'Y') {
//        cout << "Enter your name: ";
//        cin >> str;
//        cout << "Enter your age: ";
//        cin >> age;
//
//       
//        ofstream output("info.txt", ios::app);
//
//        if (output.is_open()) {
//            output << "Name: " << str << endl;
//            output << "Age: " << age << endl;
//            output.close();
//            cout << "Data appended " << endl;
//        }
//        else {
//            cout << "Unable to open file ." << endl;
//        }
//
//        cout << "Do you want to add more ";
//        cin >> selection;
//    }
//
//    cout << "Closing the programme" << endl;
//    return 0;
//}


//Question 4:





//
//
//#include <iostream>
//#include <fstream>
//
//
//    using namespace std;
//
//    int main()
//    {
//        string words;
//        int twords = 0; 
//        ifstream input("data.txt");
//
//        if (input.is_open()) {
//            input >> words;
//            cout << words << " ";
//
//            while (input >> words) { 
//                twords++; 
//                cout << words<<" ";
//            }
//
//            cout << endl << "Total words are: " << twords+1 << endl; 
//            input.close();
//        }
//        else {
//            cout << "Unable to open file" << endl;
//        }
//
//        return 0;
//    }
////  Task 8;
//#include <iostream>
//#include <fstream>
//#include <vector>
//    using namespace std;
//
//    int main() {
//        string filename = "notes.txt";
//        vector<string> lines;
//        string line;
//        int lineNum;
//
//        
//        ifstream inFile(filename);
//        while (inFile)
//        { 
//            inFile >> line;
//            lines.push_back(line);
//        }
//        inFile.close();
//
//        
//        cout << "Current file content:\n";
//        for (int i = 0; i < lines.size(); i++) {
//            cout << i + 1 << ": " << lines[i] << endl;
//        }
//
//        
//        cout << "Enter line number to update (1-" << lines.size() << "): ";
//        cin >> lineNum;
//        cin.ignore(); 
//
//        if (lineNum < 1 || lineNum > lines.size()) {
//            cout << "Invalid line number!\n";
//            return 1;
//        }
//
//        cout << "Enter new text for line " << lineNum << ": ";
//        cin >> lines[lineNum - 1];
//
//       
//        ofstream outFile(filename);
//        for (const string& l : lines) {
//            outFile << l << "\n";
//        }
//        outFile.close();
//
//        cout << "Line updated successfully!\n";
//        return 0;
//    }





//    //Question 5:
//#include<iostream>
//#include<fstream>
//    using namespace std;
//    int main()
//    {
//
//
//        string sword;
//        cout << "Enter the word you want to search" << endl;
//        cin >> sword;
//        ifstream  input("data.txt");
//        string cword;
//        if (input.is_open())
//        {
//            while (input >> cword)
//            {
//                if (sword == cword)
//                {
//                    cout << "Word found";
//                    break;
//                }
//                else
//                {
//                    cout << "Word not found" << endl;
//                    break;
//                }
//
//
//            }
//            
//            input.close();
//            
//
//        }
//        else {
//            cout << "Unable to open" << endl;
//        }
//        system("pause");
//        return 0;
//
//    }
//
//
//#include <iostream>
//#include <fstream>
//
//using namespace std;
//
//int main() {
//    ifstream f1;
//    ofstream f2; 
//    string ch;
//
//    
//    f1.open("file1.txt", ios::in); 
//    f2.open("file2.txt", ios::out); 
//
//   
//    if (!f1) {
//        cout << "Error opening file1.txt" << endl;
//        return 1; 
//    }
//    if (!f2) {
//        cout << "Error opening file2.txt" << endl;
//        return 1;
//    }
//
//   
//    while (f1.eof()) { 
//        f1 >> ch;
//        f2 << ch << endl;
//    }
//
//   
//    f1.close();
//    f2.close();
//
//    system("pause"); 
//    return 0;
//}

//
//#include<iostream>
//#include<fstream>
////#include<string>
//
//using namespace std;
//
//int main()
//{
//    int counter = 0;
//    string my_string;
//    int change = 0;
//    ifstream file("testt.txt");
//
//    while (!file.eof())
//    {
//        counter = counter + 1;
//        cin >> my_string;
//        if (my_string == "ghi")
//        {
//            ofstream ofile("testt.txt");
//            for (int i = 0; i < counter + 1; i++)
//            {
//
//            }
//            ofile.close();
//            break;
//        }
//
//
//    }
//
//    cout << counter;
//    file.close();
//    return 0;
//}

//TAsk 4:
//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main() {
//    ifstream file("data.txt");
//    string word;
//    int count = 0;
//
//    if (file.is_open()) {
//        while (file >> word) {
//            count++;
//        }
//        cout << "Total words: " << count << endl;
//        file.close();
//    }
//    else {
//        cerr << "Error: File not found!" << endl;
//    }
//    return 0;
//}


////TASK no 9:
//#include <iostream>
//#include <fstream>
//#include <vector>
//using namespace std;
//
//int main() {
//    string filename = "database.txt";
//    int choice;
//
//    while (true) {
//        cout << "\n1. add record\n2. view all\n3. update record\n4. delete record\n5. exit\nenter choice: ";
//        cin >> choice;
//        cin.ignore(); 
//
//        if (choice == 1) { 
//            ofstream file(filename, ios::app);
//            string name, rollno, marks;
//            cout << "enter name: ";
//            cin >> name;
//            cout << "enter roll number: "; 
//            cin >> rollno;
//            cout << "enter marks: ";
//            cin >> marks;
//            file << name << "," << rollno << "," << marks << "\n";
//            file.close();
//            cout << "record added!\n";
//        }
//        else if (choice == 2) { // view all
//            ifstream file(filename);
//            string line;
//            cout << "\nall records:\n";
//            while (file) {
//                file >> line;
//                cout << line << endl;
//            }
//            file.close();
//        }
//        else if (choice == 3) { 
//            vector<string> lines;
//            string line, newroll, newname, newmarks;
//            string targetroll;
//            bool found = false;
//
//            cout << "enter roll number to update: ";
//            cin >> targetroll;
//
//           
//            ifstream infile(filename);
//            while (infile) {
//                infile >> line;
//              /*  size_t pos = line.find(",");
//                string roll = line.substr(pos + 1, line.find(",", pos + 1) - pos - 1);*/
//                if (roll == targetroll) {
//                    cout << "enter new name: ";
//                    cin >> newname;
//                    cout << "enter new marks: ";
//                    cin >> newmarks;
//                    line = newname + "," + targetroll + "," + newmarks;
//                    found = true;
//                }
//                lines.push_back(line);
//            }
//            infile.close();
//
//            if (found) {
//                ofstream outfile(filename);
//                for (const string& l : lines) {
//                    outfile << l << "\n";
//                }
//                outfile.close();
//                cout << "record updated!\n";
//            }
//            else {
//                cout << "roll number not found!\n";
//            }
//        }
//        else if (choice == 4) { // delete
//            vector<string> lines;
//            string line, targetroll;
//            bool found = false;
//
//            cout << "enter roll number to delete: ";
//            cin >> targetroll;
//
//            // read all records except the target
//            ifstream infile(filename);
//            while (infile){
//                infile >> line;
//                size_t pos = line.find(",");
//                string roll = line.substr(pos + 1, line.find(",", pos + 1) - pos - 1);
//                if (roll != targetroll) {
//                    lines.push_back(line);
//                }
//                else {
//                    found = true;
//                }
//            }
//            infile.close();
//
//            if (found) {
//                ofstream outfile(filename);
//                for (const string& l : lines) {
//                    outfile << l << "\n";
//                }
//                outfile.close();
//                cout << "record deleted!\n";
//            }
//            else {
//                cout << "roll number not found!\n";
//            }
//        }
//        else if (choice == 5)
//        {
//            break;
//        }
//    }
//    return 0;
//}

//task 6:
//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//int main() {
//    int choice, roll;
//    string name;
//    float marks;
//
//    while (true) {
//        cout << "\n1. Add Student\n2. View All\n3. Search by Roll\n4. Exit\nEnter choice: ";
//        cin >> choice;
//
//        if (choice == 1) {
//            ofstream file("students.txt", ios::app);
//            cout << "Enter name: ";
//            cin.ignore();
//            cin >> name;
//            cout << "Enter roll number: ";
//            cin >> roll;
//            cout << "Enter marks: ";
//            cin >> marks;
//            file << name << "," << roll << "," << marks << "\n";
//            file.close();
//        }
//        else if (choice == 2) {
//            ifstream file("students.txt");
//            string line;
//            while (file) {
//                file >> line;
//                cout << line << endl;
//            }
//            file.close();
//        }
//        else if (choice == 3) {
//            cout << "Enter roll number: ";
//            cin >> roll;
//            ifstream file("students.txt");
//            string line;
//            bool found = false;
//            while (file) {
//                file >> line;
//                size_t pos = line.find(",");
//                int currentRoll = stoi(line.substr(pos + 1, line.find(",", pos + 1) - pos - 1));
//                if (currentRoll == roll) {
//                    cout << "Record: " << line << endl;
//                    found = true;
//                    break;
//                }
//            }
//            if (!found) cout << "Record not found!" << endl;
//            file.close();
//        }
//        else if (choice == 4) {
//            break;
//        }
//    }
//    return 0;
//}