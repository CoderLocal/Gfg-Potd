class Solution
{
    public:
        long long unsigned int decimalValue(Node *head)
        {
            long long unsigned int ans=0;
            while(head!=NULL){
                ans = (ans*2+head->data)%MOD;
                head = head->next;
            }
            return ans;
             
        }
};
