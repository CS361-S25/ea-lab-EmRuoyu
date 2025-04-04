#include <iostream>
#include "Empirical/include/emp/math/Random.hpp"

class Organism {
    private:
    double behavior;

    public:
    // Constructor that takes a double and sets the behavior
    Organism(double b) {
      behavior = b;
    }
    double getBehavior() const {
        return behavior;
      }

    Organism* reproduce() {
        return new Organism(behavior);
        }
    };
int main() {
    emp::vector<Organism> population;
    // Create a 100 new Organisms
    for (int i = 0; i < 100; i++) {
        population.push_back(*new Organism(0.5));
       //std::cout << population[i].getBehavior() << std::endl;
    }
     // Reproduce the first organism
  Organism* parent = &population[0];
  Organism* offspring = parent->reproduce();

  // c. Print out addresses and behaviors
  std::cout << "Parent Address: " << parent << ", Behavior: " << parent->getBehavior() << std::endl;
  std::cout << "Offspring Address: " << offspring << ", Behavior: " << offspring->getBehavior() << std::endl;

  // Clean up to avoid memory leak
  delete offspring;
    
    for (int i = 0; i < 100; i++) {
        for(Organism j : population) {
            
          }
    }
}