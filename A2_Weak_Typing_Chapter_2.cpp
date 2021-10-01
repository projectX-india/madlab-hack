#include <iostream>
#include <string.h>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

long printAllSubstrings(string input_string, long n)
{
    /*
     * Fix start index in outer loop.
     * Reveal new character in inner loop till end of string.
     * Print till-now-formed string.
     */
    // PRINTING SUBSTRINGS

    long min_count = 0;

    int hand = 0;

    for (long i = 0; i < n; i++)
    {
        char temp[n - i + 1];

        //cout << "I is :" << i << "\n";
        
        long tempindex = 0;
        for (long j = i; j < n; j++)
        {
            temp[tempindex++] = input_string[j];

            if ( tempindex == 0 ){
                        
                        if ( input_string[j] == 'X'){
                            hand = 1;
                            //flag = 0;
                           // cout << input_string[k];
                        }else if ( input_string [j] == 'O'){
                            hand = 0;
                            //flag = 0;
                            // cout << input_string[k];
                        }

                    }

                    if ( tempindex != 0 ){
                        if ( input_string[j] == 'X' && hand == 0 ){
                            min_count = min_count + 1;
                           // cout << i << " X here";
                            hand = 1;
                        }else if ( input_string[j]  == 'O' && hand == 1){
                            min_count = min_count + 1;
                            // cout << input_string[k];
                           // cout << "O here" << i;
                            hand =0;
                        }
                    }

            temp[tempindex] = '\0';
            //printf("%s\n", temp);
        }
    }

    return min_count;
}

int main(){ 


    ofstream file_print;

    file_print.open("output_A2_Protect.txt");

    ifstream inFile;

    string temp;
    
    inFile.open("Input_A2_Protect.txt");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }


    long testcases;

    getline( inFile, temp) ;

    stringstream geek(temp);

    geek >> testcases;

    //testcases = int(temp);

    for( long testcase_loop = 0 ; testcase_loop < testcases ; testcase_loop++){

        long char_length;

        getline ( inFile, temp );

        stringstream geek ( temp );

        geek >> char_length;

        //cin >> char_length;

        long min_count = 0;

        int flag = 1;

        int hand = 0;

        // 0 for O, 1 for X

        string input_string;

        getline (inFile, input_string);


       min_count = printAllSubstrings( input_string , char_length);



        /*
        for (long len = 1; len <= char_length; len++) {   
        // Pick ending point
        
            
            for (long i = 0; i <= char_length - len; i++) {
                //  Print characters from current
                // starting point to current ending
                // point. 
                
                long j = i + len - 1;           
                for (long k = i; k <= j; k++){
                    cout << input_string[k];
                    if ( flag == 1 ){
                        
                        if ( input_string[k] == 'X'){
                            hand = 1;
                            flag = 0;
                           // cout << input_string[k];
                        }else if ( input_string [k] == 'O'){
                            hand = 0;
                            flag = 0;
                            // cout << input_string[k];
                        }
                    }
                    if ( flag == 0 ){
                        if ( input_string[k] == 'X' && hand == 0 ){
                            min_count = min_count + 1;
                           // cout << i << " X here";
                            hand = 1;
                        }else if ( input_string[k]  == 'O' && hand == 1){
                            min_count = min_count + 1;
                            // cout << input_string[k];
                           // cout << "O here" << i;
                            hand =0;
                        }
                    }
                }
                cout << "\n";
                cout << "Min Count:" << min_count << "\n";
                flag = 1;
                
            }
            */
             
        
        

      cout << min_count % 1000000007 << "\n";

      file_print << "Case #"<<testcase_loop+1<<": "<< min_count % 1000000007 << "\n";

     


    }


    file_print.close();

    inFile.close();


    return 0;
}
