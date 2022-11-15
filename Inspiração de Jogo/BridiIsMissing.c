#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int scanint(void) {
	char in[60];
	scanf("%s", &in);
	if(isdigit(in[0]))
		return in[0]-48;
	else
		return 0;
}

int chkName (const char *n1, const char *n2) { // Function used to check two strings (not case sensitive)
	int a;
	char n1new [60]= "", n2new[60]= "";
	for (a = 0; a <= strlen(n1); a++)	{
		n1new[a] = toupper(n1[a]);
	}
	for (a=0; a<=strlen(n2); a++)	{
		n2new[a] = toupper(n2[a]);
	}
	if (strcmp (n1new,n2new) == 0) // if string 1 and string 2 are the same, standard function strcmp returns 0
		return 1;
	else
		return 0;
}

void printObj(int keys, int lab, int quest, int watchOut) {
	system("cls");	//clears the screen
	if(watchOut)
		printf("\tWatch out! You need to write a number that makes sense! Try again!\n\n");
	if(keys + lab >= 1) {	//prints out the inventory based on the items the player has
		printf("Inventory: |");
		if(keys == 1)
			printf("Mysterious Keys|");
		if(lab == 1)
			printf("Lab Coat|");
		printf("\n\n");
	}
	switch(quest) {	//prints out the quest if the player has any
		case 0:
			printf("Current quest: Explore the school and gather clues about your friend.\n\n");
			break;
		case 1:
			printf("Current quest: Go to the Didactic Office.\n\n");
			break;
		case 2:
			printf("Current quest: Go to the Administrative Office.\n\n");
			break;
		case 3:
			printf("Current quest: Go back to the Didactic Office.\n\n");
			break;
		case 4:
			printf("Current quest: Find the door that your keys can open.\n\n");
			break;
	}
}

int main(void) {
	//Declaring general variables
	int choice = 0, currentLevel = 0, game = 0;
	//Declaring variables used for objects in the game
	int keys = 0, lab = 0, quest = 0;
	//Declaring variables used for easter eggs later in the game
	int merlo = 0, ermon = 0, bridi = 0;
	int watchOut = 0;
	char name[60];
	//Introduction
	while (game ==  0) {	//Keeps looping the game until the end, continuosly checking for every level
		while (currentLevel == 0) {
			system("cls");
			printf("Hello my friend, and welcome to\n\t*.*-*Bridi is Missing*-*.*\nThe goal of the game is simple: Bridi is Missing!\n\t\tFIND HIM!\nExplore the Da Vinci school and uncover the truth!\nBut first, mind telling us your name?\n");
			scanf("%s", &name);
			//Easter eggs with peculiar phrases for particular names
			if (chkName(name, "Bridi")) {
				printf("What a funny coincidence...The world is indeed very small, %s. I just hope you're not lost too... We don't really have time to find the both of you.", name);
				bridi = 1;
			} else if(chkName(name, "Ermon")) {
				printf("%s, what a strange name... Almost sounds like a surname, right? Kinda reminds me of someone else I used to know, I think he's in the Jolly Rooms right now. Say hi to him from me, all right?", name);
				ermon = 1;
			} else if(chkName(name, "Merlo")) {
				printf("%s...Like Blackbird in italian, right? Cool name! For some reason, it makes me thing of a guy coding stuff like C programs...Weird right?", name);
				merlo = 1;
			} else if(chkName(name, "debug")) {
				printf("Hey, you must be a cheater! Or maybe you're just trying to test out the game... Here, I'll give you all the objects already. Have fun!");
				keys = 1;
				lab = 1;
				quest = 4;
			} else if(chkName(name, "Ettore")) {
				printf("%s, is that you? You look like another person I used to know! There's probably two of you running around, uh? Must be some kind of paradox!", name);
			}
			printf("\nNice to meet you %s, get ready to explore!\nLet's start!\n", name);
			printf("1 = Start the game\n");
			choice = scanint();
			while (choice != 1) {
				printf("Watch out! You need to write a number that makes sense! Try again!\n");
				printf("1 = Start the game\n");
				choice = scanint();
			}
			currentLevel = 1;
		}
		//Level 1
		while (currentLevel == 1) {	//Checks the currentLevel variable to determine what level to play next
			printObj(keys, lab, quest, watchOut);
			watchOut = 0;
			printf("You're at the school entrance, and you need to find Bridi as soon as possible! Where will you start your search?\n\n");
			printf("1 = Go to the Western Wing\n");
			printf("2 = Go to the Central Corridor\n");
			printf("3 = Go to the Eastern Wing\n");
			choice = scanint();	//Scans the player's choice
			switch(choice) {	//Sets the currentLevel variable according to where the player is supposed to go from the 'choice' variable
				case 1:
					currentLevel = 2;
					break;
				case 2:
					currentLevel = 13;
					break;
				case 3:
					currentLevel = 3;
					break;
				default:
					watchOut = 1;
					break;	//Default message for when the player types in the wrong number
			}
		}
		//Level 2
		while (currentLevel == 2) {
			printObj(keys, lab, quest, watchOut);
			watchOut = 0;
			printf("You find yourself in the Western Wing. Loads of paths lie ahead: where will you go next?\n\n");
			printf("1 = Go to the First Gym\n");
			printf("2 = Go to up the stairs to the First Floor\n");
			printf("3 = Turn left into the Administrative Offices\n");
			printf("4 = Proceed to the mysterious Multimedial Room\n");
			printf("5 = Go back to the Entrance\n");
			choice = scanint();
			switch(choice) {
				case 1:
					currentLevel = 5;
					break;
				case 2:
					currentLevel = 6;
					break;
				case 3:
					currentLevel = 7;
					break;
				case 4:
					currentLevel = 4;
					break;
				case 5:
					currentLevel = 1;
					break;
				default:
					watchOut = 1;
					break;
			}
		}
		//Level 3
		while (currentLevel == 3) {
			printObj(keys, lab, quest, watchOut);
			watchOut = 0;
			printf("You are now in the Eastern Wing. You meet Giancarlo, who says:'Hello %s, what's up! I'm going to kill all the leaves with my huge leafblower! The leaves need to die!'\nWhere will you go next?\n\n", name);
			printf("1 = Go to the Second Gym.\n");
			printf("2 = Go to up the stairs to the First Floor.\n");
			printf("3 = Go back\n");
			choice = scanint();
			switch(choice) {
				case 1:
					currentLevel = 12;
					break;
				case 2:
					currentLevel = 9;
					break;
				case 3:
					currentLevel = 1;
					break;
				default:
					watchOut = 1;
					break;
			}
		}
		//Level 4
		while (currentLevel == 4) {
			printObj(keys, lab, quest, watchOut);
			watchOut = 0;
			printf("You enter the Multimedial Room. It's dark and very scary, you can only see the light coming from the big television. A locked door lies ahead. What will you do?\n");
			printf("1 = Try to unlock the door\n");
			printf("2 = Go back\n");
			choice = scanint();
			switch(choice) {
				case 1:
					if (keys == 1) {	//Specific scenario: checks and executes a different action based on an item the player is supposed to get, represented by a 0/1 integer variable used as a boolean
						printf("\nYou use your keys and the door unlocks! You can now proceed to the spooky old abandoned Church!\n");
						currentLevel = 18;
					} else {
						printf("\nYou try to unlock the door, but no matter what you do, nothing seems to work...\nYou decide to go back to the Western Wing.\n");
						printf("1 = Go back\n");
						choice = scanint();
						while (choice != 1) {
							printf("Watch out! You need to write a number that makes sense! Try again!\n");
							printf("1 = Go back\n");
							choice = scanint();
						}
						currentLevel = 2;
					}
					break;
				case 2:
					currentLevel = 2;
					break;
				default:
					watchOut = 1;
					break;
			}
		}
		//Level 5
		while (currentLevel == 5) {
			printObj(keys, lab, quest, watchOut);
			watchOut = 0;
			printf("You enter the First Gym. You hear a voice coming from inside:'%s! Did you remember to study for our very hard Baseball test! Remind that to the class too, or I'll give you all a 4!' Nothing else seems to be here...\n\n", name);
			printf("1 = Go back and study Baseball\n");
			choice = scanint();
			while (choice != 1) {
				printf("Watch out! You need to write a number that makes sense! Try again!\n");
				printf("1 = Go back and study Baseball\n");
				choice = scanint();
			}
			currentLevel = 2;
		}
		//Level 6
		while (currentLevel == 6) {
			printObj(keys, lab, quest, watchOut);
			watchOut = 0;
			printf("You are in the Western Wing in the First Floor. The janitors have pasted loads of pictures of kittens on the wall, and you don't understand why. You decide to move on.\n\n");
			printf("1 = Proceed to the Science Labs.\n");
			printf("2 = Go back to the Ground Floor\n");
			printf("3 = Go back to the Central Wing of the First Floor.\n");
			choice = scanint();
			switch(choice) {
				case 1:
					currentLevel = 8;
					break;
				case 2:
					currentLevel = 2;
					break;
				case 3:
					currentLevel = 10;
					break;
				default:
					watchOut = 1;
					break;
			}
		}
		//Level 7
		while (currentLevel == 7) {
			printObj(keys, lab, quest, watchOut);
			watchOut = 0;
			printf("You are now in the Administrative Offices. All the workers there don't really seem to care about you. Even if you try calling them, nothing happens...\n");
			if(quest == 2) {	//The quest varibale is used with four different values (0/1/2/3) to determine how far the player has come searching for the keys, and typing different text for every situation
				printf("\nFinally, someone answers your call. It's Willy! What a relief! When you ask him for the keys, he tells you:'%s, I'm busy enough planning for your trip already! Try ask someone in the Didactic office! By the way, Bruxelles is dead you guys, you'll end up in Palermo, rofl.\nEven if you just came from the Didactic office, you decide to try again.\n\n", name);
				quest = 3;
			}
			printf("1 = Go back\n");
			choice = scanint();
			while (choice != 1) { //Uses while instead of switch as there's just one option
				printf("Watch out! You need to write a number that makes sense! Try again!\n");
				printf("1 = Go back\n");
				choice = scanint();
			}
			currentLevel = 2;
		}
		//Level 8
		while (currentLevel == 8) {
			printObj(keys, lab, quest, watchOut);
			watchOut = 0;
			printf("You end up in the Science Labs. You feel a menacing presence breathing on your neck. Is it a ghost? Even worse! It's Monica! '%s, do you have your lab coat? Remember, trying to enter the labs without the coat means instant death!'\n\n", name);
			if(lab == 1) {
				printf("Thankfully, you had your coat, so you're safe. Inside the labs, you hear a voice coming from under a rock. '%s, tell me what rock is this, and you'll have a great reward!'\nYou look carefully. The rock is very dark, and seems volcanic. What will you answer?\n\n", name);
				printf("1 = Ortogneiss\n");
				printf("2 = Basalt\n");
				printf("3 = Diorite\n");
				printf("4 = Dolomite\n");
				choice = scanint();
				switch(choice) {
					case 1:
						printf("\nThat's wrong! Try again! (You feel a spooky presence staring at you.)\n");
						printf("1 = Go back to the First Floor\n");
						choice = scanint();
						while (choice != 1) {
							printf("Watch out! You need to write a number that makes sense! Try again!\n");
							printf("1 = Go back to the First Floor\n");
							choice = scanint();
						}
						currentLevel = 6;
						break;
					case 2:
						printf("\nRight! This time you win, but the war isn't over...\nNow for my hint: Remember %s, Bridi is Jesus! Where can you find Jesus?\nOh by the way, we need to decide a date for our next test. What about RIGHT NOW?\nYou flee the scene, running as fast as you can.\n", name);
						printf("1 = Go back to the First Floor\n");
						choice = scanint();
						while (choice != 1) {
							printf("Watch out! You need to write a number that makes sense! Try again!\n");
							printf("1 = Go back to the First Floor\n");
							choice = scanint();
						}
						currentLevel = 6;
						break;
					case 3:
						printf("\nThat's wrong! Try again! (You feel a spooky presence staring at you.)\n");
						printf("1 = Go back to the First Floor\n");
						choice = scanint();
						while (choice != 1) {
							printf("Watch out! You need to write a number that makes sense! Try again!\n");
							printf("1 = Go back to the First Floor\n");
							choice = scanint();
						}
						currentLevel = 6;
						break;
					case 4:
						printf("\nThat's wrong! Try again! (You feel a spooky presence staring at you.)\n");
						printf("1 = Go back to the First Floor\n");
						choice = scanint();
						while (choice != 1) {
							printf("Watch out! You need to write a number that makes sense! Try again!\n");
							printf("1 = Go back to the First Floor\n");
							choice = scanint();
						}
						currentLevel = 6;
						break;
					default:
						watchOut = 1;
						break;
				}
			} else {
				printf("You realize you don't have your coat with you, and a chilling sensation runs down your spine. You turn back and run as fast as you can, while Monica chases you with a lit Bunsen Burner and shouting weird oxidation-reduction reactions. You barely escape her.\n");
				printf("1 = Run at the speed of light back to the First Floor\n");
				choice = scanint();
				while (choice != 1) {
					printf("Watch out! You need to write a number that makes sense! Try again!\n");
					printf("1 = Run at the speed of light back to the First Floor\n");
					choice = scanint();
				}
				currentLevel = 6;
			}
		}
		//Level 9
		while (currentLevel == 9) {
			printObj(keys, lab, quest, watchOut);
			watchOut = 0;
			printf("You are in the Eastern Wing in the First Floor. You hear a weird noise, and you can't figure out where it's coming from. When you investigate further, it turns out to be your English Teacher Costanzi, which says:'Pupil, is that you? What are you doing here? Am I shocking you with this noise? Remember peep, bring yr lit book tom!'\nShe then disappears into thin air shouting:'NEICCIA'\nYou feel like you'll never forget what happened. Where will you go next?\n\n");
			printf("1 = Go to the Jolly Rooms\n");
			printf("2 = Go back to the Ground Floor\n");
			printf("3 = Go back to the Central Wing of the First Floor.\n");
			choice = scanint();
			switch(choice) {
				case 1:
					currentLevel = 11;
					break;
				case 2:
					currentLevel = 3;
					break;
				case 3:
					currentLevel = 10;
					break;
				default:
					watchOut = 1;
					break;
			}
		}
		//Level 10
		while (currentLevel == 10) {
			printObj(keys, lab, quest, watchOut);
			watchOut = 0;
			printf("You are in the Central Wing in the First Floor. You meet your classmate Giulia, who seems very lost. When she sees you, she asks:'%s, where are we? I can't seem to find our class!'\nWhen you tell her she's on the wrong floor, she thanks you and says:'By the way, what happened to Bridi? It's been a week since I last saw him...'\nYou tell her you don't know either. Where will you go next?\n\n", name);
			printf("1 = Go to the Western Wing\n");
			printf("2 = Go to the Eastern Wing\n");
			printf("3 = Go up the stairs to the Second Floor\n");
			choice = scanint();
			switch(choice) {
				case 1:
					currentLevel = 6;
					break;
				case 2:
					currentLevel = 9;
					break;
				case 3:
					currentLevel = 16;
					break;
				default:
					watchOut = 1;
					break;
			}
		}
		//Level 11
		while (currentLevel == 11) {
			printObj(keys, lab, quest, watchOut);
			watchOut = 0;
			printf("You arrive in the Jolly Rooms. You meet a weird glassed man, which seems to be waiting for you. He's eating some kind of fruit out of his strange plastic box, and because of this he can't play Trump with his friends.\n\n", name);
			if(quest == 0) {
				printf("'%s, I'm the sacred guardian of the keys to Bridi's heart. If you want them, you must now guess my name. What will you answer, Chosen One?'\n\n", name);
				printf("1 = Ermond\n");
				printf("2 = Merlo\n");
				printf("3 = Massimo\n");
				printf("4 = Ermon\n");
				choice = scanint();
				switch(choice) {
					case 1:
						printf("That's not my name you fool! Does that even sound like a real name to you? Come back later, if you dare!\n");
						break;
					case 2:
						if(merlo == 1)
							printf("Isn't that your name? Why would you tell me that? I asked you for my name, not yours! Get serious!\n");
						else
							printf("That's not my name you fool! Does that even sound like a real name to you? Come back later, if you dare!\n");
						break;
					case 3:
						printf("That's not my name you fool! Does that even sound like a real name to you? Come back later, if you dare!\n");
						break;
					case 4:
						if(ermon == 1)
							printf("Yes, that's my name...and also yours? What a funny coincidence! At least you won't think my name sounds like a surname like everybody else!\nNow that you are Enlightened, I will tell you the truth: to get the keys, go to the Didactic Office and say this magic word:'%s avevamo detto domani\nGoodbye my child! My planet needs me!'\n\n", name);
						else
							printf("Correct! Of course that's it!\n(You think to yourself, what a strange name! Almost sounds like a surname...)\nNow that you are Enlightened, I will tell you the truth: to get the keys, go to the Didactic Office and say this magic word:'%s avevamo detto domani\nGoodbye my child! My planet needs me!'\n\n", name);
						quest = 1;
						break;
					default:
						watchOut = 1;
						break;
				}
			}
			printf("Where will you go next?\n");
			printf("1 = Go to the Second Gym\n");
			printf("2 = Go to the Eastern Wing\n");
			choice = scanint();
			switch(choice) {
				case 1:
					currentLevel = 12;
					break;
				case 2:
					currentLevel = 9;
					break;
				default:
					watchOut = 1;
					break;
			}
		}
		//Level 12
		printObj(keys, lab, quest, watchOut);
		watchOut = 0;
		while (currentLevel == 12) {
			printf("You are in the Second Gym. Emilio is there trying to move the Volleyball net.\nYou ask him:'I'm looking for Leonardo, not Shrines, the other one. Do you know where he is?'\nYou wait for a while, then remember he's deaf and can't hear you. You decide to move on.\nWhere will you go next?\n\n");
			printf("1 = Go to the Jolly Rooms\n");
			printf("2 = Go to the Eastern Wing\n");
			choice = scanint();
			switch(choice) {
				case 1:
					currentLevel = 11;
					break;
				case 2:
					currentLevel = 3;
					break;
				default:
					watchOut = 1;
					break;
			}
		}
		//Level 13
		while (currentLevel == 13) {
			printObj(keys, lab, quest, watchOut);
			watchOut = 0;
			printf("You go into the Central Corridor. You meet the God and Creator of the Universe Nardon, which graces you with some words.\n'I know what you're looking for, I know everything! I won't help you, though, it's much more fun to just watch you! It's like a TV show for me! Per dire!'\nHe then snaps his fingers and some angels come from the sky and take him away. Even if you spoke with him for 30 seconds, it somehow feels like an hour has gone by...\nYou decide to move on.\n\n");
			printf("1 = Go to the Library\n");
			printf("2 = Go to the Didactic Office\n");
			printf("3 = Go back to the Entrance\n");
			choice = scanint();
			switch(choice) {
				case 1:
					currentLevel = 14;
					break;
				case 2:
					currentLevel = 15;
					break;
				case 3:
					currentLevel = 1;
					break;
				default:
					watchOut = 1;
					break;
			}
		}
		//Level 14
		printObj(keys, lab, quest, watchOut);
		watchOut = 0;
		while (currentLevel == 14) {
			printf("You are in the Library. You see your friends Maffei and Costella playing a weird game on their phones. They're probably here because they're skipping the Religion class and don't know where to go.\nNothing else seems to be here...\n\n");
			printf("1 = Go to the Central Corridor\n");
			choice = scanint();
			switch(choice) {
				case 1:
					currentLevel = 13;
					break;
				default:
					watchOut = 1;
					break;
			}
		}
		//Level 15
		while (currentLevel == 15) {
			printObj(keys, lab, quest, watchOut);
			watchOut = 0;
			printf("You are now in the Didactic Offices. All the workers there don't really seem to care about you. Even if you try calling them, nothing happens...\n\n");
			if(quest == 1) {
				printf("Someone spots you, and when you repeat the magic word the guardian taught you, something strange seems to happen, and he whispers to you:'Go to the Administrative Office, I don't know what you're talking about!'\nYou understand he really doesn't understand, and move on.\n");
				quest = 2;
			} else if(quest == 3) {
				printf("You come back, very angry that you travelled all the way to the other office for nothing. When the workers see you super triggered, they decide to listen to you, and when you mention you need the special keys, they just hand them to you, to calm you down.\nYou are filled with Determination!\nYou obtain the Keys! What will they open?\nWhere will you go next?\n");
				keys = 1;
				quest = 4;
			}
			printf("1 = Go back\n");
			choice = scanint();
			while (choice != 1) {
				printf("Watch out! You need to write a number that makes sense! Try again! \n");
				printf("1 = Go back\n");
				choice = scanint();
			}
			currentLevel = 13;
		}
		//Level 16
		while (currentLevel == 16) {
			printObj(keys, lab, quest, watchOut);
			watchOut = 0;
			printf("You are in the Second Floor. After a brief chat with your favourite janitor Rosa, you decide to move on.\n\n");
			printf("1 = Go to your Classroom\n");
			printf("2 = Go back to the First Floor\n");
			choice = scanint();
			switch(choice) {
				case 1:
					currentLevel = 17;
					break;
				case 2:
					currentLevel = 10;
					break;
				default:
					watchOut = 1;
					break;
			}
		}
		//Level 17
		while (currentLevel == 17) {
			printObj(keys, lab, quest, watchOut);
			watchOut = 0;
			printf("You arrive in your classrom. You found Leonardo!\nOh wait...It's just Shrines, not the real one!\n\n");
			if(lab == 0) {
				printf("While you're here, you decide to steal a lab coat from someone. You never know when you'll need one!\nYou obtained the Lab Coat!\n\n");
				lab = 1;
			}
			printf("Where will you go next?\n");
			printf("1 = Go back to the Second Floor\n");
			choice = scanint();
			while (choice != 1) {
				printf("Watch out! You need to write a number that makes sense! Try again! \n");
				printf("1 = Go back to the Second Floor.\n");
				choice = scanint();
			}
			currentLevel = 16;
		}
		//Level 18 - Ending
		while (currentLevel == 18) {
			printObj(keys, lab, quest, watchOut);
			watchOut = 0;
			printf("As you walk out the door, through the courtyard and towards the old Church, you feel like your journey is coming to an end. You think back at all your memories, the friends you've made, all that you have experienced, and can't help but get the strange feeling this was all some sort of ICT group project. Still, you move on, filled with Determination.\nEntering the dusty building, a voice calls upon you:'%s, are you sure you want to continue? There's no turning back now...\n", name);
			printf("1 = Continue\n");
			printf("2 = Go back\n");
			choice = scanint();
			switch(choice) {
				case 1:
					if (bridi == 1) {
						printf("You enter deep within the Curch, but nobody seems to be here. That's strange, this is the last place you need to check, and if there's nothing here, it could mean Bridi was never at school in the first place!\nYou begin to question yourself, and realize something groundbreaking.\nYou were Bridi this all time! Your name is Bridi, after all...\nYou don't know what to do after realizing your whole world is a lie, so you decide to go back.\nSuddenly, you realize you are lost too, how did you even end up here?\nYou decide to wait here, hoping somebody will eventually find you. Maybe someone with another name?\n\n");
						printf("1 = Start from the beginning and do it all again!\n");
						printf("2 = Go back to the real world\n");
						choice = scanint();
						switch(choice) {
							case 1:
								currentLevel = 0;
								keys = 0;
								lab = 0;
								quest = 0;
								break;
							case 2:
								game = 1;
								break;
						}
					} else {
						printf("You are now deep in the Church. You feel like you are being watched, and that's unsettling.\nSuddenly a familiar voice resonates in the building. It's the ICT teacher, Gammino!\n'Here you are, %s. You made it after all. I probably owe you an explaination. You see, what you're experiencing right now in reality is all part of a computer program, created by my students for a group project. I did kidnap Bridi and bring him here, but he was never really in any danger, he was never even real!\nYou made it to the end, and that's what counts. Now I should probably just give you all a 10!'\nThis is shocking. You never really existed? Maybe it's better this way, this adventure seems really crazy after all. Maybe we should experience it again?\n\n", name);
						printf("1 = Start from the beginning and do it all again!\n");
						printf("2 = Go back to the real world\n");
						choice = scanint();
						switch(choice) {
							case 1:
								currentLevel = 0;
								keys = 0;
								lab = 0;
								quest = 0;
								break;
							case 2:
								game = 1;
								break;
						}
					}
					break;
				case 2:
					currentLevel = 1;
					break;
				default:
					watchOut = 1;
					break;
			}
		}
	}
}

