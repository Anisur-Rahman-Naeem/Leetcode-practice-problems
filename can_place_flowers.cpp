class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        int trackPlots = 0;
        if (flowerbed.size() == 1)
        {
            if (flowerbed[0] == 0)
            {
                flowerbed[0] = 1;
                if (trackPlots != n)
                {
                    trackPlots++;
                }
            }
        }
        else
        {
            for (int i = 0; i < flowerbed.size() - 1; i++)
            {
                if ((i == 0) && (flowerbed[i] == 0) && (flowerbed[i + 1] == 0))
                {
                    flowerbed[i] = 1;
                    if (trackPlots != n)
                    {
                        trackPlots++;
                    }
                }
                else if ((i > 0) && (flowerbed[i] == 0) && (flowerbed[i - 1] == 0) && (flowerbed[i + 1] == 0))
                {
                    flowerbed[i] = 1;
                    if (trackPlots != n)
                    {
                        trackPlots++;
                    }
                }
            }
        }
        if ((flowerbed[flowerbed.size() - 1] == 0) && (flowerbed[(flowerbed.size() - 1) - 1] == 0))
        {
            flowerbed[flowerbed.size() - 1] = 1;
            if (trackPlots != n)
            {
                trackPlots++;
            }
        }

        // for(int plot : flowerbed){
        //     cout<<plot<<endl;
        // }

        if (trackPlots == n)
        {
            return true;
        }

        return false;
    }
};