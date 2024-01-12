#include <iostream>
#include <string>
#include <list>

using namespace std;

class character {
private:
    string name;
    int level;
    int xp;
    int xpToLvl;
    float maxHp;
    float hp;
    int maxManaPoints;
    int manaPoints;
    int strenght;
    int agility;
    int inteligence;
    int vitality;
    int dexterity;
    list<string> itemsList;

public:
    string getName() const {
        return name;
    }

    int getLevel() const {
        return level;
    }

    int getXp() const {
        return xp;
    }

    int getXpToLvl() const {
        return xpToLvl;
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
        return strenght;
    }

    int getAgility() const {
        return agility;
    }

    int getInteligence() const {
        return inteligence;
    }

    int getVitality() const {
        return vitality;
    }

    int getDexterity() const {
        return dexterity;
    }

    const list<string>& getItemsList() const {
        return itemsList;
    }

    void setName(const string& newName) {
        name = newName;
    }

    void setLevel(int newLevel) {
        level = newLevel;
    }

    void setXp(int newXp) {
        xp = newXp;
    }

    void setXpToLvl(int newxpToLvl) {
        xpToLvl = newxpToLvl;
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
        strenght = newStrenght;
    }

    void setAgility(int newAgility) {
        agility = newAgility;
    }

    void setInteligence(int newInteligence) {
        inteligence = newInteligence;
    }

    void setVitality(int newVitality) {
        vitality = newVitality;
    }

    void setDexterity(int newDexterity) {
        dexterity = newDexterity;
    }

    void addItemToList(const string& newItem) {
        itemsList.push_back(newItem);
    }
};

character player;
character enemy;
void playerInfo();
void enemyInfo();
void CreatePlayer();
void CreateEnemy();
void Fighting();

int main(int argc, char** argv)
{
    CreatePlayer();
    playerInfo();
    CreateEnemy();
    cout << "\n" << endl;
    //enemyInfo();
    Fighting();

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
void CreatePlayer() {
    string playerName;
    cout << "What is your name?" << endl;
    getline(cin, playerName);
    player.setName(playerName);
    player.setLevel(1);
    player.setXp(0);
    player.setXpToLvl(2);
    player.setHp(5);
    player.setMaxHp(5);
    player.setManaPoints(5);
    player.setMaxManaPoints(5);
    player.setStrenght(1);
    player.setAgility(1);
    player.setInteligence(1);
    player.setVitality(1);
    player.setDexterity(1);
}
void CreateEnemy() {
    string enemyName = "enemy";
    enemy.setName(enemyName);
    enemy.setLevel(player.getLevel());
    enemy.setXp(0);
    enemy.setHp(player.getHp());
    enemy.setMaxHp(player.getManaPoints());
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
    cout << "Level: " << enemy.getLevel() << endl;
    cout << "Hp: " << enemy.getHp() << "/" << enemy.getMaxHp() << endl;
    cout << "Mana: " << enemy.getManaPoints() << "/" << enemy.getMaxManaPoints() << endl;
    cout << "Strenght: " << enemy.getStrenght() << endl;
    cout << "Agility: " << enemy.getAgility() << endl;
    cout << "Intelligence: " << enemy.getInteligence() << endl;
    cout << "Vitality: " << enemy.getVitality() << endl;
    cout << "Dexterity: " << enemy.getDexterity() << endl;
}
void Fighting() {
    string input;
    do {
        cout << "What do you want to do?" << endl;
        cout << "1. Attack" << endl;
        cout << "2. Check enemy stats" << endl;
        cout << "3. Flee" << endl;


        getline(cin, input);

        if (input == "1") {
            int enemyHp = enemy.getHp();
            int dmg = player.getStrenght();
            enemy.setHp(enemyHp - dmg);
            cout << "Enemy's Hp: " << enemy.getHp() << "/" << enemy.getMaxHp() << endl;
        }
        else if (input == "2") {
            enemyInfo();
        }
        else if (input == "3") {
            return;
        }
        else {
            cout << "Wrong input" << endl;
        }   
    } while (enemy.getHp() > 0 && player.getHp() > 0);
}

    #include <iostream>
#include <string>
#include <list>

using namespace std;

class character {
private:
    string name;
    int level;
    int xp;
    int xpToLvl;
    float maxHp;
    float hp;
    int maxManaPoints;
    int manaPoints;
    int strenght;
    int agility;
    int inteligence;
    int vitality;
    int dexterity;
    list<string> itemsList;

public:
    string getName() const {
        return name;
    }

    int getLevel() const {
        return level;
    }

    int getXp() const {
        return xp;
    }

    int getXpToLvl() const {
        return xpToLvl;
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
        return strenght;
    }

    int getAgility() const {
        return agility;
    }

    int getInteligence() const {
        return inteligence;
    }

    int getVitality() const {
        return vitality;
    }

    int getDexterity() const {
        return dexterity;
    }

    const list<string>& getItemsList() const {
        return itemsList;
    }

    void setName(const string& newName) {
        name = newName;
    }

    void setLevel(int newLevel) {
        level = newLevel;
    }

    void setXp(int newXp) {
        xp = newXp;
    }

    void setXpToLvl(int newxpToLvl) {
        xpToLvl = newxpToLvl;
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
        strenght = newStrenght;
    }

    void setAgility(int newAgility) {
        agility = newAgility;
    }

    void setInteligence(int newInteligence) {
        inteligence = newInteligence;
    }

    void setVitality(int newVitality) {
        vitality = newVitality;
    }

    void setDexterity(int newDexterity) {
        dexterity = newDexterity;
    }

    void addItemToList(const string& newItem) {
        itemsList.push_back(newItem);
    }
};

character player;
character enemy;
void playerInfo();
void enemyInfo();
void CreatePlayer();
void CreateEnemy();
void Fighting();

int main(int argc, char** argv)
{
    CreatePlayer();
    playerInfo();
    CreateEnemy();
    cout << "\n" << endl;
    //enemyInfo();
    Fighting();

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
void CreatePlayer() {
    string playerName;
    cout << "What is your name?" << endl;
    getline(cin, playerName);
    player.setName(playerName);
    player.setLevel(1);
    player.setXp(0);
    player.setXpToLvl(2);
    player.setHp(5);
    player.setMaxHp(5);
    player.setManaPoints(5);
    player.setMaxManaPoints(5);
    player.setStrenght(1);
    player.setAgility(1);
    player.setInteligence(1);
    player.setVitality(1);
    player.setDexterity(1);
}
void CreateEnemy() {
    string enemyName = "enemy";
    enemy.setName(enemyName);
    enemy.setLevel(player.getLevel());
    enemy.setXp(0);
    enemy.setHp(player.getHp());
    enemy.setMaxHp(player.getManaPoints());
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
    cout << "Level: " << enemy.getLevel() << endl;
    cout << "Hp: " << enemy.getHp() << "/" << enemy.getMaxHp() << endl;
    cout << "Mana: " << enemy.getManaPoints() << "/" << enemy.getMaxManaPoints() << endl;
    cout << "Strenght: " << enemy.getStrenght() << endl;
    cout << "Agility: " << enemy.getAgility() << endl;
    cout << "Intelligence: " << enemy.getInteligence() << endl;
    cout << "Vitality: " << enemy.getVitality() << endl;
    cout << "Dexterity: " << enemy.getDexterity() << endl;
}
void Fighting() {
    string input;
    do {
        cout << "What do you want to do?" << endl;
        cout << "1. Attack" << endl;
        cout << "2. Check enemy stats" << endl;
        cout << "3. Flee" << endl;


        getline(cin, input);

        if (input == "1") {
            int enemyHp = enemy.getHp();
            int dmg = player.getStrenght();
            enemy.setHp(enemyHp - dmg);
            cout << "Enemy's Hp: " << enemy.getHp() << "/" << enemy.getMaxHp() << endl;
        }
        else if (input == "2") {
            enemyInfo();
        }
        else if (input == "3") {
            return;
        }
        else {
            cout << "Wrong input" << endl;
        }   
    } while (enemy.getHp() > 0 && player.getHp() > 0);
}

    #include <iostream>
#include <string>
#include <list>

using namespace std;

class character {
private:
    string name;
    int level;
    int xp;
    int xpToLvl;
    float maxHp;
    float hp;
    int maxManaPoints;
    int manaPoints;
    int strenght;
    int agility;
    int inteligence;
    int vitality;
    int dexterity;
    list<string> itemsList;

public:
    string getName() const {
        return name;
    }

    int getLevel() const {
        return level;
    }

    int getXp() const {
        return xp;
    }

    int getXpToLvl() const {
        return xpToLvl;
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
        return strenght;
    }

    int getAgility() const {
        return agility;
    }

    int getInteligence() const {
        return inteligence;
    }

    int getVitality() const {
        return vitality;
    }

    int getDexterity() const {
        return dexterity;
    }

    const list<string>& getItemsList() const {
        return itemsList;
    }

    void setName(const string& newName) {
        name = newName;
    }

    void setLevel(int newLevel) {
        level = newLevel;
    }

    void setXp(int newXp) {
        xp = newXp;
    }

    void setXpToLvl(int newxpToLvl) {
        xpToLvl = newxpToLvl;
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
        strenght = newStrenght;
    }

    void setAgility(int newAgility) {
        agility = newAgility;
    }

    void setInteligence(int newInteligence) {
        inteligence = newInteligence;
    }

    void setVitality(int newVitality) {
        vitality = newVitality;
    }

    void setDexterity(int newDexterity) {
        dexterity = newDexterity;
    }

    void addItemToList(const string& newItem) {
        itemsList.push_back(newItem);
    }
};

character player;
character enemy;
void playerInfo();
void enemyInfo();
void CreatePlayer();
void CreateEnemy();
void Fighting();

int main(int argc, char** argv)
{
    CreatePlayer();
    playerInfo();
    CreateEnemy();
    cout << "\n" << endl;
    //enemyInfo();
    Fighting();

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
void CreatePlayer() {
    string playerName;
    cout << "What is your name?" << endl;
    getline(cin, playerName);
    player.setName(playerName);
    player.setLevel(1);
    player.setXp(0);
    player.setXpToLvl(2);
    player.setHp(5);
    player.setMaxHp(5);
    player.setManaPoints(5);
    player.setMaxManaPoints(5);
    player.setStrenght(1);
    player.setAgility(1);
    player.setInteligence(1);
    player.setVitality(1);
    player.setDexterity(1);
}
void CreateEnemy() {
    string enemyName = "enemy";
    enemy.setName(enemyName);
    enemy.setLevel(player.getLevel());
    enemy.setXp(0);
    enemy.setHp(player.getHp());
    enemy.setMaxHp(player.getManaPoints());
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
    cout << "Level: " << enemy.getLevel() << endl;
    cout << "Hp: " << enemy.getHp() << "/" << enemy.getMaxHp() << endl;
    cout << "Mana: " << enemy.getManaPoints() << "/" << enemy.getMaxManaPoints() << endl;
    cout << "Strenght: " << enemy.getStrenght() << endl;
    cout << "Agility: " << enemy.getAgility() << endl;
    cout << "Intelligence: " << enemy.getInteligence() << endl;
    cout << "Vitality: " << enemy.getVitality() << endl;
    cout << "Dexterity: " << enemy.getDexterity() << endl;
}
void Fighting() {
    string input;
    do {
        cout << "What do you want to do?" << endl;
        cout << "1. Attack" << endl;
        cout << "2. Check enemy stats" << endl;
        cout << "3. Flee" << endl;


        getline(cin, input);

        if (input == "1") {
            int enemyHp = enemy.getHp();
            int dmg = player.getStrenght();
            enemy.setHp(enemyHp - dmg);
            cout << "Enemy's Hp: " << enemy.getHp() << "/" << enemy.getMaxHp() << endl;
        }
        else if (input == "2") {
            enemyInfo();
        }
        else if (input == "3") {
            return;
        }
        else {
            cout << "Wrong input" << endl;
        }   
    } while (enemy.getHp() > 0 && player.getHp() > 0);
}

    #include <iostream>
#include <string>
#include <list>

using namespace std;

class character {
private:
    string name;
    int level;
    int xp;
    int xpToLvl;
    float maxHp;
    float hp;
    int maxManaPoints;
    int manaPoints;
    int strenght;
    int agility;
    int inteligence;
    int vitality;
    int dexterity;
    list<string> itemsList;

public:
    string getName() const {
        return name;
    }

    int getLevel() const {
        return level;
    }

    int getXp() const {
        return xp;
    }

    int getXpToLvl() const {
        return xpToLvl;
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
        return strenght;
    }

    int getAgility() const {
        return agility;
    }

    int getInteligence() const {
        return inteligence;
    }

    int getVitality() const {
        return vitality;
    }

    int getDexterity() const {
        return dexterity;
    }

    const list<string>& getItemsList() const {
        return itemsList;
    }

    void setName(const string& newName) {
        name = newName;
    }

    void setLevel(int newLevel) {
        level = newLevel;
    }

    void setXp(int newXp) {
        xp = newXp;
    }

    void setXpToLvl(int newxpToLvl) {
        xpToLvl = newxpToLvl;
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
        strenght = newStrenght;
    }

    void setAgility(int newAgility) {
        agility = newAgility;
    }

    void setInteligence(int newInteligence) {
        inteligence = newInteligence;
    }

    void setVitality(int newVitality) {
        vitality = newVitality;
    }

    void setDexterity(int newDexterity) {
        dexterity = newDexterity;
    }

    void addItemToList(const string& newItem) {
        itemsList.push_back(newItem);
    }
};

character player;
character enemy;
void playerInfo();
void enemyInfo();
void CreatePlayer();
void CreateEnemy();
void Fighting();

int main(int argc, char** argv)
{
    CreatePlayer();
    playerInfo();
    CreateEnemy();
    cout << "\n" << endl;
    //enemyInfo();
    Fighting();

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
void CreatePlayer() {
    string playerName;
    cout << "What is your name?" << endl;
    getline(cin, playerName);
    player.setName(playerName);
    player.setLevel(1);
    player.setXp(0);
    player.setXpToLvl(2);
    player.setHp(5);
    player.setMaxHp(5);
    player.setManaPoints(5);
    player.setMaxManaPoints(5);
    player.setStrenght(1);
    player.setAgility(1);
    player.setInteligence(1);
    player.setVitality(1);
    player.setDexterity(1);
}
void CreateEnemy() {
    string enemyName = "enemy";
    enemy.setName(enemyName);
    enemy.setLevel(player.getLevel());
    enemy.setXp(0);
    enemy.setHp(player.getHp());
    enemy.setMaxHp(player.getManaPoints());
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
    cout << "Level: " << enemy.getLevel() << endl;
    cout << "Hp: " << enemy.getHp() << "/" << enemy.getMaxHp() << endl;
    cout << "Mana: " << enemy.getManaPoints() << "/" << enemy.getMaxManaPoints() << endl;
    cout << "Strenght: " << enemy.getStrenght() << endl;
    cout << "Agility: " << enemy.getAgility() << endl;
    cout << "Intelligence: " << enemy.getInteligence() << endl;
    cout << "Vitality: " << enemy.getVitality() << endl;
    cout << "Dexterity: " << enemy.getDexterity() << endl;
}
void Fighting() {
    string input;
    do {
        cout << "What do you want to do?" << endl;
        cout << "1. Attack" << endl;
        cout << "2. Check enemy stats" << endl;
        cout << "3. Flee" << endl;


        getline(cin, input);

        if (input == "1") {
            int enemyHp = enemy.getHp();
            int dmg = player.getStrenght();
            enemy.setHp(enemyHp - dmg);
            cout << "Enemy's Hp: " << enemy.getHp() << "/" << enemy.getMaxHp() << endl;
        }
        else if (input == "2") {
            enemyInfo();
        }
        else if (input == "3") {
            return;
        }
        else {
            cout << "Wrong input" << endl;
        }   
    } while (enemy.getHp() > 0 && player.getHp() > 0);
}

    #include <iostream>
#include <string>
#include <list>

using namespace std;

class character {
private:
    string name;
    int level;
    int xp;
    int xpToLvl;
    float maxHp;
    float hp;
    int maxManaPoints;
    int manaPoints;
    int strenght;
    int agility;
    int inteligence;
    int vitality;
    int dexterity;
    list<string> itemsList;

public:
    string getName() const {
        return name;
    }

    int getLevel() const {
        return level;
    }

    int getXp() const {
        return xp;
    }

    int getXpToLvl() const {
        return xpToLvl;
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
        return strenght;
    }

    int getAgility() const {
        return agility;
    }

    int getInteligence() const {
        return inteligence;
    }

    int getVitality() const {
        return vitality;
    }

    int getDexterity() const {
        return dexterity;
    }

    const list<string>& getItemsList() const {
        return itemsList;
    }

    void setName(const string& newName) {
        name = newName;
    }

    void setLevel(int newLevel) {
        level = newLevel;
    }

    void setXp(int newXp) {
        xp = newXp;
    }

    void setXpToLvl(int newxpToLvl) {
        xpToLvl = newxpToLvl;
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
        strenght = newStrenght;
    }

    void setAgility(int newAgility) {
        agility = newAgility;
    }

    void setInteligence(int newInteligence) {
        inteligence = newInteligence;
    }

    void setVitality(int newVitality) {
        vitality = newVitality;
    }

    void setDexterity(int newDexterity) {
        dexterity = newDexterity;
    }

    void addItemToList(const string& newItem) {
        itemsList.push_back(newItem);
    }
};

character player;
character enemy;
void playerInfo();
void enemyInfo();
void CreatePlayer();
void CreateEnemy();
void Fighting();

int main(int argc, char** argv)
{
    CreatePlayer();
    playerInfo();
    CreateEnemy();
    cout << "\n" << endl;
    //enemyInfo();
    Fighting();

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
void CreatePlayer() {
    string playerName;
    cout << "What is your name?" << endl;
    getline(cin, playerName);
    player.setName(playerName);
    player.setLevel(1);
    player.setXp(0);
    player.setXpToLvl(2);
    player.setHp(5);
    player.setMaxHp(5);
    player.setManaPoints(5);
    player.setMaxManaPoints(5);
    player.setStrenght(1);
    player.setAgility(1);
    player.setInteligence(1);
    player.setVitality(1);
    player.setDexterity(1);
}
void CreateEnemy() {
    string enemyName = "enemy";
    enemy.setName(enemyName);
    enemy.setLevel(player.getLevel());
    enemy.setXp(0);
    enemy.setHp(player.getHp());
    enemy.setMaxHp(player.getManaPoints());
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
    cout << "Level: " << enemy.getLevel() << endl;
    cout << "Hp: " << enemy.getHp() << "/" << enemy.getMaxHp() << endl;
    cout << "Mana: " << enemy.getManaPoints() << "/" << enemy.getMaxManaPoints() << endl;
    cout << "Strenght: " << enemy.getStrenght() << endl;
    cout << "Agility: " << enemy.getAgility() << endl;
    cout << "Intelligence: " << enemy.getInteligence() << endl;
    cout << "Vitality: " << enemy.getVitality() << endl;
    cout << "Dexterity: " << enemy.getDexterity() << endl;
}
void Fighting() {
    string input;
    do {
        cout << "What do you want to do?" << endl;
        cout << "1. Attack" << endl;
        cout << "2. Check enemy stats" << endl;
        cout << "3. Flee" << endl;


        getline(cin, input);

        if (input == "1") {
            int enemyHp = enemy.getHp();
            int dmg = player.getStrenght();
            enemy.setHp(enemyHp - dmg);
            cout << "Enemy's Hp: " << enemy.getHp() << "/" << enemy.getMaxHp() << endl;
        }
        else if (input == "2") {
            enemyInfo();
        }
        else if (input == "3") {
            return;
        }
        else {
            cout << "Wrong input" << endl;
        }   
    } while (enemy.getHp() > 0 && player.getHp() > 0);
}

    #include <iostream>
#include <string>
#include <list>

using namespace std;

class character {
private:
    string name;
    int level;
    int xp;
    int xpToLvl;
    float maxHp;
    float hp;
    int maxManaPoints;
    int manaPoints;
    int strenght;
    int agility;
    int inteligence;
    int vitality;
    int dexterity;
    list<string> itemsList;

public:
    string getName() const {
        return name;
    }

    int getLevel() const {
        return level;
    }

    int getXp() const {
        return xp;
    }

    int getXpToLvl() const {
        return xpToLvl;
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
        return strenght;
    }

    int getAgility() const {
        return agility;
    }

    int getInteligence() const {
        return inteligence;
    }

    int getVitality() const {
        return vitality;
    }

    int getDexterity() const {
        return dexterity;
    }

    const list<string>& getItemsList() const {
        return itemsList;
    }

    void setName(const string& newName) {
        name = newName;
    }

    void setLevel(int newLevel) {
        level = newLevel;
    }

    void setXp(int newXp) {
        xp = newXp;
    }

    void setXpToLvl(int newxpToLvl) {
        xpToLvl = newxpToLvl;
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
        strenght = newStrenght;
    }

    void setAgility(int newAgility) {
        agility = newAgility;
    }

    void setInteligence(int newInteligence) {
        inteligence = newInteligence;
    }

    void setVitality(int newVitality) {
        vitality = newVitality;
    }

    void setDexterity(int newDexterity) {
        dexterity = newDexterity;
    }

    void addItemToList(const string& newItem) {
        itemsList.push_back(newItem);
    }
};

character player;
character enemy;
void playerInfo();
void enemyInfo();
void CreatePlayer();
void CreateEnemy();
void Fighting();

int main(int argc, char** argv)
{
    CreatePlayer();
    playerInfo();
    CreateEnemy();
    cout << "\n" << endl;
    //enemyInfo();
    Fighting();

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
void CreatePlayer() {
    string playerName;
    cout << "What is your name?" << endl;
    getline(cin, playerName);
    player.setName(playerName);
    player.setLevel(1);
    player.setXp(0);
    player.setXpToLvl(2);
    player.setHp(5);
    player.setMaxHp(5);
    player.setManaPoints(5);
    player.setMaxManaPoints(5);
    player.setStrenght(1);
    player.setAgility(1);
    player.setInteligence(1);
    player.setVitality(1);
    player.setDexterity(1);
}
void CreateEnemy() {
    string enemyName = "enemy";
    enemy.setName(enemyName);
    enemy.setLevel(player.getLevel());
    enemy.setXp(0);
    enemy.setHp(player.getHp());
    enemy.setMaxHp(player.getManaPoints());
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
    cout << "Level: " << enemy.getLevel() << endl;
    cout << "Hp: " << enemy.getHp() << "/" << enemy.getMaxHp() << endl;
    cout << "Mana: " << enemy.getManaPoints() << "/" << enemy.getMaxManaPoints() << endl;
    cout << "Strenght: " << enemy.getStrenght() << endl;
    cout << "Agility: " << enemy.getAgility() << endl;
    cout << "Intelligence: " << enemy.getInteligence() << endl;
    cout << "Vitality: " << enemy.getVitality() << endl;
    cout << "Dexterity: " << enemy.getDexterity() << endl;
}
void Fighting() {
    string input;
    do {
        cout << "What do you want to do?" << endl;
        cout << "1. Attack" << endl;
        cout << "2. Check enemy stats" << endl;
        cout << "3. Flee" << endl;


        getline(cin, input);

        if (input == "1") {
            int enemyHp = enemy.getHp();
            int dmg = player.getStrenght();
            enemy.setHp(enemyHp - dmg);
            cout << "Enemy's Hp: " << enemy.getHp() << "/" << enemy.getMaxHp() << endl;
        }
        else if (input == "2") {
            enemyInfo();
        }
        else if (input == "3") {
            return;
        }
        else {
            cout << "Wrong input" << endl;
        }   
    } while (enemy.getHp() > 0 && player.getHp() > 0);
}

    #include <iostream>
#include <string>
#include <list>

using namespace std;

class character {
private:
    string name;
    int level;
    int xp;
    int xpToLvl;
    float maxHp;
    float hp;
    int maxManaPoints;
    int manaPoints;
    int strenght;
    int agility;
    int inteligence;
    int vitality;
    int dexterity;
    list<string> itemsList;

public:
    string getName() const {
        return name;
    }

    int getLevel() const {
        return level;
    }

    int getXp() const {
        return xp;
    }

    int getXpToLvl() const {
        return xpToLvl;
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
        return strenght;
    }

    int getAgility() const {
        return agility;
    }

    int getInteligence() const {
        return inteligence;
    }

    int getVitality() const {
        return vitality;
    }

    int getDexterity() const {
        return dexterity;
    }

    const list<string>& getItemsList() const {
        return itemsList;
    }

    void setName(const string& newName) {
        name = newName;
    }

    void setLevel(int newLevel) {
        level = newLevel;
    }

    void setXp(int newXp) {
        xp = newXp;
    }

    void setXpToLvl(int newxpToLvl) {
        xpToLvl = newxpToLvl;
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
        strenght = newStrenght;
    }

    void setAgility(int newAgility) {
        agility = newAgility;
    }

    void setInteligence(int newInteligence) {
        inteligence = newInteligence;
    }

    void setVitality(int newVitality) {
        vitality = newVitality;
    }

    void setDexterity(int newDexterity) {
        dexterity = newDexterity;
    }

    void addItemToList(const string& newItem) {
        itemsList.push_back(newItem);
    }
};

character player;
character enemy;
void playerInfo();
void enemyInfo();
void CreatePlayer();
void CreateEnemy();
void Fighting();

int main(int argc, char** argv)
{
    CreatePlayer();
    playerInfo();
    CreateEnemy();
    cout << "\n" << endl;
    //enemyInfo();
    Fighting();

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
void CreatePlayer() {
    string playerName;
    cout << "What is your name?" << endl;
    getline(cin, playerName);
    player.setName(playerName);
    player.setLevel(1);
    player.setXp(0);
    player.setXpToLvl(2);
    player.setHp(5);
    player.setMaxHp(5);
    player.setManaPoints(5);
    player.setMaxManaPoints(5);
    player.setStrenght(1);
    player.setAgility(1);
    player.setInteligence(1);
    player.setVitality(1);
    player.setDexterity(1);
}
void CreateEnemy() {
    string enemyName = "enemy";
    enemy.setName(enemyName);
    enemy.setLevel(player.getLevel());
    enemy.setXp(0);
    enemy.setHp(player.getHp());
    enemy.setMaxHp(player.getManaPoints());
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
    cout << "Level: " << enemy.getLevel() << endl;
    cout << "Hp: " << enemy.getHp() << "/" << enemy.getMaxHp() << endl;
    cout << "Mana: " << enemy.getManaPoints() << "/" << enemy.getMaxManaPoints() << endl;
    cout << "Strenght: " << enemy.getStrenght() << endl;
    cout << "Agility: " << enemy.getAgility() << endl;
    cout << "Intelligence: " << enemy.getInteligence() << endl;
    cout << "Vitality: " << enemy.getVitality() << endl;
    cout << "Dexterity: " << enemy.getDexterity() << endl;
}
void Fighting() {
    string input;
    do {
        cout << "What do you want to do?" << endl;
        cout << "1. Attack" << endl;
        cout << "2. Check enemy stats" << endl;
        cout << "3. Flee" << endl;


        getline(cin, input);

        if (input == "1") {
            int enemyHp = enemy.getHp();
            int dmg = player.getStrenght();
            enemy.setHp(enemyHp - dmg);
            cout << "Enemy's Hp: " << enemy.getHp() << "/" << enemy.getMaxHp() << endl;
        }
        else if (input == "2") {
            enemyInfo();
        }
        else if (input == "3") {
            return;
        }
        else {
            cout << "Wrong input" << endl;
        }   
    } while (enemy.getHp() > 0 && player.getHp() > 0);
}

    