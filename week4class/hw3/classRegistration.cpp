int main()
{
    int option; // Three different departments
    cout << "Select a department: (1)Computer Science (2)Math (3)Science" << endl;
    cin >> option;

   
    if(option == '1') //CSCI selected, now dislay departments
    {
        cout << "Choose a class: (1)Starting Computing(2) Data Structures (3)Algorithms" << endl; // Three diff classes
        cin >> option;
    }
    else if(option == '1')
    {
        cout << "You chose Starging Computing" << endl;//Starting computing
    }
    else if(option == 'c')
    {
        cout << "You chose Data Structures" << endl;
    }
    else 
    {
        cout << "Sorry, we don't have that option. Goodbye!" << endl;
    }
    cin >> option;
    switch(option) { // always have to be a variable NOT a condition
        case 'A':
        case 'a': cout << "You chose Furniture" << endl;
            
        case 'B':
        case 'b': cout << "You chose Supplies" << endl;
                    
        case 'C':
        case 'c': cout << "You chose Grocery" << endl;
                         
        default: cout << "Sorry, we don't have that option. Goodbye!" << endl;
             break;   // Break statements must be present or switch statement will fall through
        // update the loop variable so that it terminates at some point
        char(option)
        cout << "Welcome to Target" << endl;
        cout << "a: Furniture" << endl;
        cout << "b: Supplies" << endl;
        cout << "c: Grocery" << endl;
        cout << "Q: Quit" << endl;
        cout << "Choose a category: ";
        cin >> option >> endl;
    
    }

    
    return 0;

}