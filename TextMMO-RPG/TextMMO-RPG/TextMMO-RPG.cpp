#include <iostream>
#include <string>
#include <list>

using namespace std;

class character {
private:
    string name;
    float maxHp;
    float hp;
    int maxManaPoints;
    int manaPoints;
    int strength;  
    int agility;
    int intelligence;  
    int vitality;
    int dexterity;
    //list<string> itemsList;

public:
    string getName() const {
        return name;
    }

    float getMaxHp() const {
        return maxHp;
    }

    float getHp() const {
        return hp;
    }

    int getMaxManaPoints() const {
        return maxManaPoints;
    }

    int getManaPoints() const {
        return manaPoints;
    }

    int getStrenght() const {
        return strength;
    }

    int getAgility() const {
        return agility;
    }

    int getInteligence() const {
        return intelligence;
    }

    int getVitality() const {
        return vitality;
    }

    int getDexterity() const {
        return dexterity;
    }

    void setName(const string& newName) {
        name = newName;
    }

    void setMaxHp(float newMaxHp) {
        maxHp = newMaxHp;
    }

    void setHp(float newHp) {
        hp = newHp;
    }

    void setMaxManaPoints(int newMaxManaPoints) {
        maxManaPoints = newMaxManaPoints;
    }

    void setManaPoints(int newManaPoints) {
        manaPoints = newManaPoints;
    }

    void setStrenght(int newStrenght) {
        strength = newStrenght;
    }

    void setAgility(int newAgility) {
        agility = newAgility;
    }

    void setInteligence(int newInteligence) {
        intelligence = newInteligence;
    }

    void setVitality(int newVitality) {
        vitality = newVitality;
    }

    void setDexterity(int newDexterity) {
        dexterity = newDexterity;
    }

    character() {
        name = "Default";
        maxHp = 5;
        hp = 5;
        maxManaPoints = 5;
        manaPoints = 5;
        strength = 1;
        agility = 1;
        intelligence = 1;
        vitality = 1;
        dexterity = 1;
    }
};
class Player : public character {
private:
    float money;
    list<string> itemsList;
    int level;
    int xp;
    int xpToLvl;

public:
    float getMoney() const {
        return money;
    }

    void setMoney(float newMoney) {
        money = newMoney;
    }

    const list<string>& getItemsList() const {
        return itemsList;
    }

    void addItem(const string& item) {
        itemsList.push_back(item);
    }

    void removeItem(const string& item) {
        itemsList.remove(item);
    }

    int getLevel() const {
        return level;
    }

    void setLevel(int newLevel) {
        level = newLevel;
    }

    int getXp() const {
        return xp;
    }

    void setXp(int newXP) {
        xp = newXP;
    }

    int getXpToLvl() const {
        return xpToLvl;
    }

    void setXpToLvl(int newXpToLvl) {
        xpToLvl = newXpToLvl;
    }
    Player(){
    level = 1;
    xp = 0;
    xpToLvl = 2;
    money = 0.0;
        }
};

//Player player;
character enemy;
void playerInfo();
void enemyInfo();
//void CreatePlayer();
void CreateEnemy();
void Fighting();
void fightMenu();
void enemyAtack();
void Menu();
void cityMenu();
void city();
void blacksmith();
void magicShop();
void shop();
void hospitalMenu();
void hospital();
void preyToLord();

Player player;
int main(int argc, char** argv)
{
    string playerName;
    cout << "What is your name?" << endl;
    getline(cin, playerName);
    player.setName(playerName);
    CreateEnemy();
    int choice;

        do {
            Menu();
            cin >> choice;

            switch (choice) {
            case 1:
                system("CLS");
                Fighting();
                break;

            case 2:
                system("CLS");
                city();
                break;
            case 3:
                system("CLS");
                playerInfo();
                break;
            case 0:
                system("CLS");
                cout << "Exiting the program.\n";
                break;

            default:
                system("CLS");
                cout << "Invalid choice. Please try again.\n";
            }

        } while (choice != 0);

        return 0;
    }
void playerInfo() {
    cout << "Name: " << player.getName() << endl;
    cout << "Level: " << player.getLevel() << endl;
    cout << "XP: " << player.getXp() << "/" << player.getXpToLvl() << endl;
    cout << "Hp: " << player.getHp() << "/" << player.getMaxHp() << endl;
    cout << "Mana: " << player.getManaPoints() << "/" << player.getMaxManaPoints() << endl;
    cout << "Strenght: " << player.getStrenght() << endl;
    cout << "Agility: " << player.getAgility() << endl;
    cout << "Intelligence: " << player.getInteligence() << endl;
    cout << "Vitality: " << player.getVitality() << endl;
    cout << "Dexterity: " << player.getDexterity() << endl;
}
void CreateEnemy() {
    string enemyName = "enemy";
    enemy.setName(enemyName);
    enemy.setHp(3);
    enemy.setMaxHp(3);
    enemy.setManaPoints(player.getManaPoints());
    enemy.setMaxManaPoints(player.getMaxManaPoints());
    enemy.setStrenght(player.getStrenght());
    enemy.setAgility(player.getAgility());
    enemy.setInteligence(player.getInteligence());
    enemy.setVitality(player.getVitality());
    enemy.setDexterity(player.getDexterity());
}
void enemyInfo() {
    
    cout << "Name: " << enemy.getName() << endl;
    //cout << "Level: " << enemy.getLevel() << endl;
    cout << "Hp: " << enemy.getHp() << "/" << enemy.getMaxHp() << endl;
    cout << "Mana: " << enemy.getManaPoints() << "/" << enemy.getMaxManaPoints() << endl;
    cout << "Strenght: " << enemy.getStrenght() << endl;
    cout << "Agility: " << enemy.getAgility() << endl;
    cout << "Intelligence: " << enemy.getInteligence() << endl;
    cout << "Vitality: " << enemy.getVitality() << endl;
    cout << "Dexterity: " << enemy.getDexterity() << endl;
}
void Fighting() {
    int fightChoice;
    int dmg;
    int enemyHp;

    do {
        fightMenu();

        cin >> fightChoice;

        switch (fightChoice) {
        case 1:
            system("cls");
            enemyHp = enemy.getHp();
            dmg = player.getStrenght();
            enemy.getHp();
            player.getStrenght();
            enemy.setHp(enemyHp - dmg);
            cout << "Enemy's Hp: " << enemy.getHp() << "/" << enemy.getMaxHp() << endl;
            enemyAtack();
            break;

        case 2:
            system("cls");
            enemyInfo();
            break;

        case 3:
            system("cls");
            return;
            break;

        default:
            system("cls");
            cout << "Invalid choice. Please try again.\n";
        }

    } while (enemy.getHp() >= 0 || player.getHp() >= 0);   /// jeden bool co sprawdza bo nie dziala??
}
void enemyAtack() {
    int playerHp = player.getHp();
    int dmg = enemy.getStrenght();
    player.setHp(playerHp - dmg);
    cout << "Your Hp: " << player.getHp() << "/" << player.getMaxHp() << endl;
}
void Menu() {
    
    cout << "Where u wanna go?\n";
    cout << "1. Fight with monsters\n";
    cout << "2. City\n";
    cout << "3. See your stats\n";
    cout << "0. Exit\n";
    cout << "Enter your choice: ";
}
void cityMenu() {
    
    cout << "Where u wanna go?\n";
    cout << "1. Shop\n";
    cout << "2. Blacksmith\n";
    cout << "3. MagicShop\n";
    cout << "4. Hospital\n";
    cout << "0. Exit\n";
    cout << "Enter your choice: ";
}
void city() {
    int cityChoice;

    do {

        cityMenu();

        cin >> cityChoice;

        switch (cityChoice) {
        case 1:
            system("cls");
            shop();
            break;

        case 2:
            system("cls");
            blacksmith();
            break;

        case 3:
            system("cls");
            magicShop();
            break;

        case 4:
            system("cls");
            hospital();
            break;

        case 0:
            system("cls");
            cout << "Back\n";
            break;

        default:
            system("cls");
            cout << "Invalid choice. Please try again.\n";
        }

    } while (cityChoice != 0);
}
void blacksmith() {
    
    cout << "Comming soon.\n";
}
void magicShop() {
    
    cout << "Comming soon.\n";
}
void shop() {
    
    cout << "Comming soon.\n";
}
void hospitalMenu() {
   
    cout << "What you wanna do\n";
    cout << "1. Prey\n";
    cout << "0. Back\n";
    cout << "Enter your choice: ";
    }
void hospital() {
int prey;
    do {

        hospitalMenu();
        
        cin >> prey;

        switch (prey) {
        case 1:
            system("cls");
            preyToLord();
            break;

        case 0:
            system("cls");
            cout << "Back\n";
            break;

        default:
            system("cls");
            cout << "Invalid choice. Please try again.\n";
        }

    } while (prey != 0);
}
void preyToLord() {
    if (player.getHp() < player.getMaxHp())
        player.setHp(player.getHp() + 1);
    
    cout << "God blessed you." << endl;
}
void fightMenu() {
    
    cout << "What do you want to do?" << endl;
    cout << "1. Attack" << endl;
    cout << "2. Check enemy stats" << endl;
    cout << "3. Flee" << endl;
    cout << "Enter your choice: ";
}
