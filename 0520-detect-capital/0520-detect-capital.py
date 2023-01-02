class Solution:
    def detectCapitalUse(self, word: str) -> bool:
      if(word.islower()==True):
       return True
      elif(word.isupper()==True):
       return True
      elif(word.istitle()==True):
        return True
      else:
        return False
       
     