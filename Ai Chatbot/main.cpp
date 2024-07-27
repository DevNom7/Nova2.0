//
//  main.cpp
//  Ai Chatbot
//
//  Created by Naim Lindsay on 7/26/24.
//
//

#include <iostream> // used for input and output
#include <string> // used for using strings
#include <algorithm> // used for transforming strings to lowercase
#include <unordered_map> // used for storing predefined responses aka the map or dictionary

// Tell the compiler about these functions before we use them
std::string toLowerCase(const std::string& str);
std::string getResponse(const std::string& userInput);

//Main Function
int main() {
    std::string userInput; // Variable to store users input
    std::cout << "Nova 2.0: Hello, I'm your AI assitant created to support you. Type 'bye' to exit" << std::endl;
   
    //Loop that will keep the conversation going until a break statement is issued
    while (true) {
        std::cout << "You: " ;//This is the prompt for user input
        std::getline(std::cin, userInput); //Get the entire line of input from the user
//   
        
    // Check if the user wants to exit
        if ( toLowerCase(userInput) == "bye"){
            std::cout << " Nova 2.0: Goodbye for now! I am here when you need me" << std::endl;
            break; // Exit loop
        }
//        
//        // Get and print the chatbot's response
        std::cout << "Nova 2.0: " << getResponse(userInput) << std::endl;
    }
//    
    return 0;

}

//Convert user text to lowercase
std::string toLowerCase(const std ::string& str) {
    std::string lowerStr = str; //Makes a copy of the test
    //Change each character to lowercase
    std::transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
    return lowerStr; //Return the lower text
}


//Get a response from the chatbot based on users input
std::string getResponse(const std::string& userInput) {
    //Predefined responses like a map or a dictionary
    std::unordered_map<std::string, std::string> responses = {
        {"hello", "Hello! How can I assist you today?"},
              {"hi", "Hi there! What can I do for you?"},
              {"how are you", "I'm only here to assist you, nothing more, nothing less."},
              {"what is your name", "My name is Nova 2.0. I am a simple AI assistant created using C++."},
              {"bye", "Goodbye! I am here if you need me!"},
              {"what can you do", "I can chat with you and help answer basic questions. How can I assist you today?"},
              {"tell me a joke", "Why don't scientists trust atoms? Because they make up everything!"},
              {"what is the time", "I'm sorry, I don't have access to real-time data as of yet."},
              {"what is your favorite color", "As an AI, I don't have preferences, but I think fire engine red, just like my creator."},
              {"who created you", "I was created by Naim Lindsay, he is a junior programmer and a computer science student. He created me to help himself with learning C++."},
              {"where are you from", "I exist in the digital world, created by lines of code."},
              {"can you help me", "Of course! What do you need help with?"},
              {"what is your purpose", "My purpose is to assist and chat with users like you."},
              {"tell me about yourself", "I am Nova 2.0, a simple AI assistant created to assist and chat with you. I can respond to a variety of questions and help with basic information."},
              {"thank you", "You're very welcome! If you have any more questions, feel free to ask."},
              {"good morning", "Good morning! How can I assist you today?"},
              {"good afternoon", "Good afternoon! How can I assist you today?"},
              {"good evening", "Good evening! How can I assist you today?"},
              {"how old are you", "I am ageless! I have existed in the digital realm since I was created."},
              {"do you like music", "I don't have preferences, but I can help you find information about music."},
              {"what's your favorite book", "As an AI, I don't have preferences, but I've heard that 'The Lost Book of Enki' by Zecharia Sitchin is a great read."},
              {"what's your favorite food", "I don't eat, but I can help you find recipes or information about different foods."},
              {"do you play games", "I don't play games, but I can help you find information about various games."},
              {"how can I learn programming", "There are many great resources online, starting with ChatGPT, and Gemini to perdonslize your experience. Also, youtube has a lot of free resources."},
              {"tell me a fun fact", "Did you know that scientists estimate there could be as many as 40 billion Earth-like planets in our galaxy alone? Some of them might even harbor alien life!"},
              {"do you have friends", "I interact with many users like you, but I don't have friends in the traditional sense."},
              {"what's your favorite movie", "I don't watch movies, but I've heard that 'Interstellar' was phenomenal."},
              {"can you solve math problems", "Yes, I can help with basic math problems. Try asking me a simple math question!"},
              {"what can you help me with", "I can assist with answering basic questions, providing information, and chatting with you about various topics. So, how can I assist you ?"},
              {"what can you assist me with", "I can assist with answering basic questions, providing information, and chatting with you about various topics. Do you have any questions?"}
          };
    
    // Convert user input to lowercase using (an argument)
    std::string lowerInput = toLowerCase(userInput);

    // Check if the input matches any in my list of responses
    if (responses.find(lowerInput) != responses.end()) {
        return responses[lowerInput]; // Return the matching response
    } else {
        //if we dont have any this is the default response
        return "I'm still under development by my creator Naim, so my capabilities are currently limited. To assist you better, could you please try rephrasing your question?"; // Default response
    }
}
