
class Bank{
private:
  unordered_map<int,long long>mp;
public:
    Bank(vector<long long>&balance){
      for(int i=0;i<balance.size();i++){
        mp[i+1]=balance[i];
      }
    }
    bool transfer(int account1, int account2, long long money) {
        if(!mp.count(account1)||!mp.count(account2)) return false;
        long long currentMoney=mp[account1];
        if(currentMoney<money){
            return false;
        }
        mp[account1]=currentMoney-money;
        mp[account2]=mp[account2]+money;
        return true;
    }
    
    bool deposit(int account, long long money) {
          if(!mp.count(account)) return false;
     long long currentMoney=mp[account];
     mp[account]=currentMoney+money;
     return true;
    }
    
    bool withdraw(int account, long long money) {
           if(!mp.count(account)) return false;
        long long currentMoney=mp[account];
        if(currentMoney<money){
            return false;
        }
        mp[account]=currentMoney-money;
        return true;
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */