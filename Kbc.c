#include <stdio.h>  
#include<stdlib.h>
#include<string.h>
int main(){
    int i;
    char ans[1];
    char life[1];
    int lfli[1];
    char line[100][100]={"Audience vote","50-50","Expert advice"};
    char ques[200][200]={"Q.1 Which crop is sown on the largest area in India ?",
        "Q.2 For which of the following disciplines is Nobel Prize awarded ?",
        "Q.3 Which of the following national parks is not listed in a UNESCO World Heritage site ?",
        "Q.4 In which state has the largest area ?",
        "Q.5 The Maratha and The Kesri were the two main newspapers which were started by the following people ?",
        "Q.6 When did the World Trade Organization come into existence?",
        "Q.7 Which of the following personalities gave ‘The Laws of Heredity’? ",
        "Q.8 In which year did the Cabinet Mission arrived in India?",
        "Q.9 The winners of which game are honored: Federation Cup, World Cup, Alvin International Trophy and Challenge Cup? ",
        "Q.10 Which of the following is the world’s largest and deepest ocean ?"};

    char opt[200][200]={"(A)Rice (B)Wheat (C)Sugarcane (D)Maize",
        "(A)Physics and Chemistry (B)Physiology or Medicine (C)Literature, Peace and Economics (D)All of the above",
        "(A)Kaziranga (B)Keoladeo (C)Sundarbans (D)Kanha ",
        "(A)Maharashtra (B)Madhya Pradesh (C)Uttar Pradesh (D)Rajasthan",
        "(A)Lala Lajpat Rai (B)Gopal Krishna Gokhale (C)Bal Gangadhar Tilak (D)Madan Mohan Malviya",
        "(A)1992 (B)1993 (C)1994 (D)1995",
        "(A)Robert Hook (B)G.J. Mendel (C)Charles Darwin (D)William Harvey",
        "(A)1942 (B)1943 (C)1945 (D)1946",
        "(A)Tennis (B)Volleyball (C)Basketball (D)Cricket",
        "(A)Arctic (B)Atlantic (C)Pacific (D)Indian"};
    for(i=0;i<10;i++){

        //first
            if(i==0){
            printf("%s",ques+i);
                printf("\n%s\n",opt+i);
                printf("If you want to use lifeline press y otherwise press n: ");
                scanf(" %c",&life[1]);
            if (life[1]=='y')
                {
                printf("Which lifeline you want to use: ");
                printf("\nAudince pole:1\n50-50:2\nExpert advice:3\n");
                scanf(" %d",&lfli[1]);
                switch(lfli[1]){    
                    case 1:    
                            printf("The maximum audience voted for option A. \n ");
                            printf("Now chose your answer: \n");
                            scanf(" %c",&ans[1]);
                        if(ans[1]=='A'||ans[1]=='a'){
                            printf("Right answer! You have won 1000Rs\n");
                            
                        }else{
                            printf("Wrong answer! Better luck next time");
                        }      
                            break;    
                    case 2:    
                            printf("choose between option A and B, one of these is correct. \n ");
                            printf("Now chose your answer: \n");
                            scanf(" %c",&ans[1]);
                        if(ans[1]=='A'||ans[1]=='a'){
                            printf("Right answer! You have won 1000Rs\n");
                            
                        }else{
                            printf("Wrong answer! Better luck next time");
                        }      
                    break;    
                    case 3:    
                            printf("Expert has advised for option A. \n ");
                            printf("Now chose your answer: \n");
                            scanf(" %c",&ans[1]);
                        if(ans[1]=='A'||ans[1]=='a'){
                            printf("Right answer! You have won 1000Rs\n");
                            
                        }else{
                            printf("Wrong answer! Better luck next time");
                        }      
                    break;    
                    default:    
                    printf("This is invalid input.");    
                    }    
                    return 0;    
                }
            
            
                else{  
                printf("choose your option\n");
                scanf(" %c",&ans[1]);
                if(ans[1]=='A'||ans[1]=='a'){
                    printf("Right answer! You have won 1000Rs\n");
                    
                }else{
                    printf("Wrong answer! Better luck next time");
                }  
                }
            }
//second
            if(i==1){
            printf("%s",ques+i);
                printf("\n%s\n",opt+i);
                printf("If you want to use lifeline press y otherwise press n");
                scanf(" %c",&life[1]);
            if (life[1]=='y')
                {
                printf("Which lifeline you want to use: ");
                printf("\nAudince pole:1\n50-50:2\nExpert advice:3\n");
                scanf(" %d",&lfli[1]);
                switch(lfli[1]){    
                    case 1:    
                            printf("The maximum audience voted for option D. \n ");
                            printf("Now chose your answer: \n");
                            scanf(" %c",&ans[1]);
                        if(ans[1]=='D'||ans[1]=='d'){
                            printf("Right answer! You have won 5000Rs\n");
                            
                        }else{
                            printf("Wrong answer! Better luck next time");
                        }      
                            break;    
                    case 2:    
                            printf("choose between option B and D, one of these is correct. \n ");
                            printf("Now chose your answer: \n");
                            scanf(" %c",&ans[1]);
                        if(ans[1]=='D'||ans[1]=='d'){
                            printf("Right answer! You have won 5000Rs\n");
                            
                        }else{
                            printf("Wrong answer! Better luck next time");
                        }      
                    break;    
                    case 3:    
                            printf("Expert has advised for option D. \n ");
                            printf("Now chose your answer: \n");
                            scanf(" %c",&ans[1]);
                        if(ans[1]=='D'||ans[1]=='d'){
                            printf("Right answer! You have won 5000Rs\n");
                            
                        }else{
                            printf("Wrong answer! Better luck next time");
                        }      
                    break;    
                    default:    
                    printf("This is invalid input.");    
                    }    
                    return 0;    
                }
            
            
                else{  
                printf("choose your option\n");
                scanf(" %c",&ans[1]);
                if(ans[1]=='D'||ans[1]=='d'){
                    printf("Right answer! You have won 5000Rs\n");
                    
                }else{
                    printf("Wrong answer! Better luck next time");
                }  
                }
            }
//third
            if(i==2){
            printf("%s",ques+i);
                printf("\n%s\n",opt+i);
                printf("If you want to use lifeline press y otherwise press n");
                scanf(" %c",&life[1]);
            if (life[1]=='y')
                {
                printf("Which lifeline you want to use: ");
                printf("\nAudince pole:1\n50-50:2\nExpert advice:3\n");
                scanf(" %d",&lfli[1]);
                switch(lfli[1]){    
                    case 1:    
                            printf("The maximum audience voted for option D. \n ");
                            printf("Now chose your answer: \n");
                            scanf(" %c",&ans[1]);
                        if(ans[1]=='D'||ans[1]=='d'){
                            printf("Right answer! You have won 10,000Rs\n");
                            
                        }else{
                            printf("Wrong answer! Better luck next time");
                        }      
                            break;    
                    case 2:    
                            printf("choose between option C and D, one of these is correct. \n ");
                            printf("Now chose your answer: \n");
                            scanf(" %c",&ans[1]);
                        if(ans[1]=='D'||ans[1]=='d'){
                            printf("Right answer! You have won 10,000Rs\n");
                            
                        }else{
                            printf("Wrong answer! Better luck next time");
                        }      
                    break;    
                    case 3:    
                            printf("Expert has advised for option D. \n ");
                            printf("Now chose your answer: \n");
                            scanf(" %c",&ans[1]);
                        if(ans[1]=='D'||ans[1]=='d'){
                            printf("Right answer! You have won 10,000Rs\n");
                            
                        }else{
                            printf("Wrong answer! Better luck next time");
                        }      
                    break;    
                    default:    
                    printf("This is invalid input.");    
                    }    
                    return 0;    
                }
            
            
                else{  
                printf("choose your option\n");
                scanf(" %c",&ans[1]);
                if(ans[1]=='D'||ans[1]=='d'){
                    printf("Right answer! You have won 10,000Rs\n");
                    
                }else{
                    printf("Wrong answer! Better luck next time");
                }  
                }
            }

//fourth
            if(i==3){
            printf("%s",ques+i);
                printf("\n%s\n",opt+i);
                printf("If you want to use lifeline press y otherwise press n");
                scanf(" %c",&life[1]);
            if (life[1]=='y')
                {
                printf("Which lifeline you want to use: ");
                printf("\nAudince pole:1\n50-50:2\nExpert advice:3\n");
                scanf(" %d",&lfli[1]);
                switch(lfli[1]){    
                    case 1:    
                            printf("The maximum audience voted for option D. \n ");
                            printf("Now chose your answer: \n");
                            scanf(" %c",&ans[1]);
                        if(ans[1]=='D'||ans[1]=='d'){
                            printf("Right answer! You have won 20,000Rs\n");
                            
                        }else{
                            printf("Wrong answer! Better luck next time");
                        }      
                            break;    
                    case 2:    
                            printf("choose between option A and D, one of these is correct. \n ");
                            printf("Now chose your answer: \n");
                            scanf(" %c",&ans[1]);
                        if(ans[1]=='D'||ans[1]=='d'){
                            printf("Right answer! You have won 20,000Rs\n");
                            
                        }else{
                            printf("Wrong answer! Better luck next time");
                        }      
                    break;    
                    case 3:    
                            printf("Expert has advised for option A. \n ");
                            printf("Now chose your answer: \n");
                            scanf(" %c",&ans[1]);
                        if(ans[1]=='D'||ans[1]=='d'){
                            printf("Right answer! You have won 20,000Rs\n");
                            
                        }else{
                            printf("Wrong answer! Better luck next time");
                        }      
                    break;    
                    default:    
                    printf("This is invalid input.");    
                    }    
                    return 0;    
                }
            
            
                else{  
                printf("choose your option\n");
                scanf(" %c",&ans[1]);
                if(ans[1]=='D'||ans[1]=='d'){
                    printf("Right answer! You have won 20,000Rs\n");
                    
                }else{
                    printf("Wrong answer! Better luck next time");
                }  
                }
            }
//fifth

            if(i==4){
            printf("%s",ques+i);
                printf("\n%s\n",opt+i);
                printf("If you want to use lifeline press y otherwise press n");
                scanf(" %c",&life[1]);
            if (life[1]=='y')
                {
                printf("Which lifeline you want to use: ");
                printf("\nAudince pole:1\n50-50:2\nExpert advice:3\n");
                scanf(" %d",&lfli[1]);
                switch(lfli[1]){    
                    case 1:    
                            printf("The maximum audience voted for option C. \n ");
                            printf("Now chose your answer: \n");
                            scanf(" %c",&ans[1]);
                        if(ans[1]=='C'||ans[1]=='c'){
                            printf("Right answer! You have won 50,000Rs\n");
                            
                        }else{
                            printf("Wrong answer! Better luck next time");
                        }      
                            break;    
                    case 2:    
                            printf("choose between option B and C, one of these is correct. \n ");
                            printf("Now chose your answer: \n");
                            scanf(" %c",&ans[1]);
                        if(ans[1]=='C'||ans[1]=='c'){
                            printf("Right answer! You have won 50,000Rs\n");
                            
                        }else{
                            printf("Wrong answer! Better luck next time");
                        }      
                    break;    
                    case 3:    
                            printf("Expert has advised for option C. \n ");
                            printf("Now chose your answer: \n");
                            scanf(" %c",&ans[1]);
                        if(ans[1]=='C'||ans[1]=='c'){
                            printf("Right answer! You have won 50,000Rs\n");
                            
                        }else{
                            printf("Wrong answer! Better luck next time");
                        }      
                    break;    
                    default:    
                    printf("This is invalid input.");    
                    }    
                    return 0;    
                }
            
            
                else{  
                printf("choose your option\n");
                scanf(" %c",&ans[1]);
                if(ans[1]=='C'||ans[1]=='c'){
                    printf("Right answer! You have won 50,000Rs\n");
                    
                }else{
                    printf("Wrong answer! Better luck next time");
                }  
                }
            }

            //sixth
            if(i==5){
            printf("%s",ques+i);
                printf("\n%s\n",opt+i);
                printf("If you want to use lifeline press y otherwise press n");
                scanf(" %c",&life[1]);
            if (life[1]=='y')
                {
                printf("Which lifeline you want to use: ");
                printf("\nAudince pole:1\n50-50:2\nExpert advice:3\n");
                scanf(" %d",&lfli[1]);
                switch(lfli[1]){    
                    case 1:    
                            printf("The maximum audience voted for option D. \n ");
                            printf("Now chose your answer: \n");
                            scanf(" %c",&ans[1]);
                        if(ans[1]=='D'||ans[1]=='d'){
                            printf("Right answer! You have won 75,000Rs\n");
                            
                        }else{
                            printf("Wrong answer! Better luck next time");
                        }      
                            break;    
                    case 2:    
                            printf("choose between option A and D, one of these is correct. \n ");
                            printf("Now chose your answer: \n");
                            scanf(" %c",&ans[1]);
                        if(ans[1]=='D'||ans[1]=='d'){
                            printf("Right answer! You have won 75,000Rs\n");
                            
                        }else{
                            printf("Wrong answer! Better luck next time");
                        }      
                    break;    
                    case 3:    
                            printf("Expert has advised for option D. \n ");
                            printf("Now chose your answer: \n");
                            scanf(" %c",&ans[1]);
                        if(ans[1]=='D'||ans[1]=='d'){
                            printf("Right answer! You have won 75,000Rs\n");
                            
                        }else{
                            printf("Wrong answer! Better luck next time");
                        }      
                    break;    
                    default:    
                    printf("This is invalid input.");    
                    }    
                    return 0;    
                }
            
            
                else{  
                printf("choose your option\n");
                scanf(" %c",&ans[1]);
                if(ans[1]=='D'||ans[1]=='d'){
                    printf("Right answer! You have won 75,000Rs\n");
                    
                }else{
                    printf("Wrong answer! Better luck next time");
                }  
                }
            }

            //seven
            if(i==6){
            printf("%s",ques+i);
                printf("\n%s\n",opt+i);
                printf("If you want to use lifeline press y otherwise press n");
                scanf(" %c",&life[1]);
            if (life[1]=='y')
                {
                printf("Which lifeline you want to use: ");
                printf("\nAudince pole:1\n50-50:2\nExpert advice:3\n");
                scanf(" %d",&lfli[1]);
                switch(lfli[1]){    
                    case 1:    
                            printf("The maximum audience voted for option B. \n ");
                            printf("Now chose your answer: \n");
                            scanf(" %c",&ans[1]);
                        if(ans[1]=='B'||ans[1]=='b'){
                            printf("Right answer! You have won 1,00,000Rs\n");
                            
                        }else{
                            printf("Wrong answer! Better luck next time");
                        }      
                            break;    
                    case 2:    
                            printf("choose between option A and B, one of these is correct. \n ");
                            printf("Now chose your answer: \n");
                            scanf(" %c",&ans[1]);
                        if(ans[1]=='B'||ans[1]=='b'){
                            printf("Right answer! You have won 1,00,000Rs\n");
                            
                        }else{
                            printf("Wrong answer! Better luck next time");
                        }      
                    break;    
                    case 3:    
                            printf("Expert has advised for option A. \n ");
                            printf("Now chose your answer: \n");
                            scanf(" %c",&ans[1]);
                        if(ans[1]=='B'||ans[1]=='b'){
                            printf("Right answer! You have won 1,00,000Rs\n");
                            
                        }else{
                            printf("Wrong answer! Better luck next time");
                        }      
                    break;    
                    default:    
                    printf("This is invalid input.");    
                    }    
                    return 0;    
                }
            
            
                else{  
                printf("choose your option\n");
                scanf(" %c",&ans[1]);
                if(ans[1]=='B'||ans[1]=='b'){
                    printf("Right answer! You have won 1,00,000Rs\n");
                    
                }else{
                    printf("Wrong answer! Better luck next time");
                }  
                }
            }

            //eight

           if(i==7){
            printf("%s",ques+i);
                printf("\n%s\n",opt+i);
                printf("If you want to use lifeline press y otherwise press n");
                scanf(" %c",&life[1]);
            if (life[1]=='y')
                {
                printf("Which lifeline you want to use: ");
                printf("\nAudince pole:1\n50-50:2\nExpert advice:3\n");
                scanf(" %d",&lfli[1]);
                switch(lfli[1]){    
                    case 1:    
                            printf("The maximum audience voted for option D. \n ");
                            printf("Now chose your answer: \n");
                            scanf(" %c",&ans[1]);
                        if(ans[1]=='D'||ans[1]=='d'){
                            printf("Right answer! You have won 1,25,000Rs\n");
                            
                        }else{
                            printf("Wrong answer! Better luck next time");
                        }      
                            break;    
                    case 2:    
                            printf("choose between option c and D, one of these is correct. \n ");
                            printf("Now chose your answer: \n");
                            scanf(" %c",&ans[1]);
                        if(ans[1]=='D'||ans[1]=='d'){
                            printf("Right answer! You have won 1,25,000Rs\n");
                            
                        }else{
                            printf("Wrong answer! Better luck next time");
                        }      
                    break;    
                    case 3:    
                            printf("Expert has advised for option D. \n ");
                            printf("Now chose your answer: \n");
                            scanf(" %c",&ans[1]);
                        if(ans[1]=='D'||ans[1]=='d'){
                            printf("Right answer! You have won 1,25,000Rs\n");
                            
                        }else{
                            printf("Wrong answer! Better luck next time");
                        }      
                    break;    
                    default:    
                    printf("This is invalid input.");    
                    }    
                    return 0;    
                }
            
            
                else{  
                printf("choose your option\n");
                scanf(" %c",&ans[1]);
                if(ans[1]=='D'||ans[1]=='d'){
                    printf("Right answer! You have won 1,25,000Rs\n");
                    
                }else{
                    printf("Wrong answer! Better luck next time");
                }  
                }
            }

            //nine 
            if(i==8){
            printf("%s",ques+i);
                printf("\n%s\n",opt+i);
                printf("If you want to use lifeline press y otherwise press n");
                scanf(" %c",&life[1]);
            if (life[1]=='y')
                {
                printf("Which lifeline you want to use: ");
                printf("\nAudince pole:1\n50-50:2\nExpert advice:3\n");
                scanf(" %d",&lfli[1]);
                switch(lfli[1]){    
                    case 1:    
                            printf("The maximum audience voted for option B. \n ");
                            printf("Now chose your answer: \n");
                            scanf(" %c",&ans[1]);
                        if(ans[1]=='B'||ans[1]=='b'){
                            printf("Right answer! You have won 1,50,000Rs\n");
                            
                        }else{
                            printf("Wrong answer! Better luck next time");
                        }      
                            break;    
                    case 2:    
                            printf("choose between option A and B, one of these is correct. \n ");
                            printf("Now chose your answer: \n");
                            scanf(" %c",&ans[1]);
                        if(ans[1]=='B'||ans[1]=='b'){
                            printf("Right answer! You have won 1,50,000Rs\n");
                            
                        }else{
                            printf("Wrong answer! Better luck next time");
                        }      
                    break;    
                    case 3:    
                            printf("Expert has advised for option B. \n ");
                            printf("Now chose your answer: \n");
                            scanf(" %c",&ans[1]);
                        if(ans[1]=='B'||ans[1]=='b'){
                            printf("Right answer! You have won 1,50,000Rs\n");
                            
                        }else{
                            printf("Wrong answer! Better luck next time");
                        }      
                    break;    
                    default:    
                    printf("This is invalid input.");    
                    }    
                    return 0;    
                }
            
            
                else{  
                printf("choose your option\n");
                scanf(" %c",&ans[1]);
                if(ans[1]=='B'||ans[1]=='b'){
                    printf("Right answer! You have won 1,50,000Rs\n");
                    
                }else{
                    printf("Wrong answer! Better luck next time");
                }  
                }
            }

            //ten

            if(i==9){
            printf("%s",ques+i);
                printf("\n%s\n",opt+i);
                printf("If you want to use lifeline press y otherwise press n");
                scanf(" %c",&life[1]);
            if (life[1]=='y')
                {
                printf("Which lifeline you want to use: ");
                printf("\nAudince pole:1\n50-50:2\nExpert advice:3\n");
                scanf(" %d",&lfli[1]);
                switch(lfli[1]){    
                    case 1:    
                            printf("The maximum audience voted for option C. \n ");
                            printf("Now chose your answer: \n");
                            scanf(" %c",&ans[1]);
                        if(ans[1]=='C'||ans[1]=='c'){
                            printf("Right answer! You have won 2,00,000Rs\n");
                            
                        }else{
                            printf("Wrong answer! Better luck next time");
                        }      
                            break;    
                    case 2:    
                            printf("choose between option A and C, one of these is correct. \n ");
                            printf("Now chose your answer: \n");
                            scanf(" %c",&ans[1]);
                        if(ans[1]=='C'||ans[1]=='c'){
                            printf("Right answer! You have won 2,00,000Rs\n");
                            
                        }else{
                            printf("Wrong answer! Better luck next time");
                        }      
                    break;    
                    case 3:    
                            printf("Expert has advised for option C. \n ");
                            printf("Now chose your answer: \n");
                            scanf(" %c",&ans[1]);
                        if(ans[1]=='C'||ans[1]=='c'){
                            printf("Right answer! You have won 2,00,000Rs\n");
                            
                        }else{
                            printf("Wrong answer! Better luck next time");
                        }      
                    break;    
                    default:    
                    printf("This is invalid input.");    
                    }    
                    return 0;    
                }
            
            
                else{  
                printf("choose your option\n");
                scanf(" %c",&ans[1]);
                if(ans[1]=='C'||ans[1]=='c'){
                    printf("Right answer! You have won 2,00,000Rs\n");
                    
                }else{
                    printf("Wrong answer! Better luck next time");
                }  
                }
            }

    }
        
}
