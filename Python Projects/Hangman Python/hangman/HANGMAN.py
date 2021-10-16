import random
import time
from words import wordlist         #imports list of words from words.py

class bcolors:
    HEADER = '\033[95m'
    OKBLUE = '\033[94m'
    OKCYAN = '\033[96m'
    OKGREEN = '\033[92m'
    WARNING = '\033[93m'
    FAIL = '\033[91m'
    ENDC = '\033[0m'
    BOLD = '\033[1m'
    UNDERLINE = '\033[4m'


def get_word():                             #It makes a random choice from the word list.
    word = random.choice(wordlist)
    return word.upper()


def play(word):                             #the main function which manages the whole game
    word_completion = "_" * len(word)
    guessed = False
    guessed_letters = []
    guessed_words = []
    tries = 6
    print(f"{bcolors.WARNING}LETS PLAY HANGMAN!{bcolors.ENDC}")

    time.sleep(1)
    print(display(0))
    print("\n")
    print(word_completion)
    print("\n")
    print("( TIP! WORD IS",len(word)," LETTERS LONG. )")
   

    print("\n")

    while not guessed and tries > 0:                  
        guess = input(f"{bcolors.OKGREEN}Please guess a letter or word: {bcolors.ENDC}").upper()

        if len(guess) == 1 and guess.isalpha():            #checks weather the input is a letter        
            
            if guess in guessed_letters:                   #checks for double entry of same letter
                print("You already guessed the letter ! ", guess)

            elif guess not in word:                         #checks weather the letter is in the word or not
                print(guess, " is not in the word.")
                tries -= 1
                print("You have", tries,"tries left")
                guessed_letters.append(guess)

            else:                                          #does the main job, of assingind the index to correct gusssed
                print("Good job,", guess, "is in the word!")
                guessed_letters.append(guess)
                word_as_list = list(word_completion)
                index = word.find(guess)
                word_as_list[index] = guess
                word_completion = "".join(word_as_list)
                print ("\n\nCorrect! \nYour guesses: %s" % (guessed_letters))
                print(word_completion)

                if '_' not in word_completion:              #checks wheather you guessed the word or not
                    guessed=True

        
        elif len(guess) == len(word) and guess.isalpha():   #checks weather the input is a word
            if guess in guessed_words:
                print("You already guessed the word", guess) 
            elif guess != word:
                print(guess, "is not the word.\n")
                tries -= 1
                print("You have", tries,"tries left")
                guessed_words.append(guess)
            else:
                guessed = True
                word_completion = word
        
        elif guess=="QUIT" or guess=="EXIT":            #helps you to exit in the mid game
            quit()
        else:
            print("Not a valid guess.")

        time.sleep(0.5)
        
        print(display(tries))
        print(word_completion)
        print("\n")
        time.sleep(0.5)
    if guessed:
        print(f"{bcolors.BOLD}Congrats, you guessed the word! You win! {bcolors.ENDC}")
    else:
        print("Sorry, you ran out of tries. The word was " + word + ". Maybe next time!")
    time.sleep(2)


def display(tries):    #this function have different stages of Hangman
    hang = ["""
    H A N G M A N 

    +---+
    |   |
    O   |
   /|\  |
   / \  |
        |
    =========""", """
    H A N G M A N 

    +---+
    |   |
    O   |
   /|\  |
   /    |
        |
    =========""", """
    H A N G M A N 

   +---+
    |   |
    O   |
   /|\  |
        |
        |
    =========""", """
    H A N G M A N 

    +---+
    |   |
    O   |
   /|   |
        |
        |
    =========""", """
    H A N G M A N 

    +---+
    |   |
    O   |
    |   |
        |
        |
    =========""", """
    H A N G M A N 

    +---+
    |   |
    O   |
        |
        |
        |
    =========""", """
    H A N G M A N 
    +---+
    |   |
        |
        |
        |
        |
    ========="""]
    return hang[tries]



word = get_word()   
play(word)
time.sleep(1)
while input("\nDo you wanna Play Again? (Y/N) ").upper() == "Y":
    word = get_word()
    play(word)
