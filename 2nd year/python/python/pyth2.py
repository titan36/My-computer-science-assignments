import random
class die:
      def roll(self):
          first=random.randint(1,6)
          sec=random.randint(1,6)
          return first,sec
dice = die()
print(dice.roll())
