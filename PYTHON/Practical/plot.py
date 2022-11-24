from matplotlib import pyplot as plt
import pandas as pd

data = pd.read_csv("Population.csv")
print(data)

dataForPlot = data.head()
print(dataForPlot)

#plot the line graph
plt.plot(dataForPlot['Year'],dataForPlot['Total'],'o')
plt.title('Line Graph: Year vs Total Population')
plt.xlabel('Year')
plt.ylabel('Total Population')
plt.show()

#plot a bar graph 
plt.bar(dataForPlot['Year'],dataForPlot['Total'],width=6,color=['r','y'])
plt.title('Bar Graph: Year vs Total Population')
plt.xlabel('Year')
plt.ylabel('Total Population')
plt.show()

#--------------------------pie chart------------------------------

plt.title('Pie Chart: Population of Year 1790')
activity =['Manhattan','Brooklyn','Queens','Bronx','Staten Island']

# portion covered by each label 
slices = [6.5, 2, 2.6, 1,1.5] 
  
# color for each label 
colors = ['r', 'y', 'g', 'b','c'] 
  
# plotting the pie chart 
plt.pie(slices, labels=activity, colors=colors,startangle=90, shadow = True,radius = 1.2, autopct = '%.1f%%') 

# plotting legend 
plt.legend(loc='lower right') 
  
# showing the plot 
plt.show()


# plot the histogram for yera 1790
plt.hist(dataForPlot['Year'],5,histtype='bar',rwidth=0.8)
plt.show()

'''---------------------------------------output---------------------------------
kajal@kajal-ThinkPad-T430:~/Desktop/Python/Practical$ python plot.py 
    Year  Manhattan  Brooklyn   Queens    Bronx  Staten Island    Total
0   1698       4937      2017      NaN      NaN            727     7681
1   1771      21863      3623      NaN      NaN           2847    28423
2   1790      33131      4549     6159     1781           3827    49447
3   1800      60515      5740     6642     1755           4563    79215
4   1810      96373      8303     7444     2267           5347   119734
5   1820     123706     11187     8246     2782           6135   152056
6   1830     202589     20535     9049     3023           7082   242278
7   1840     312710     47613    14480     5346          10965   391114
8   1850     515547    138882    18593     8032          15061   696115
9   1860     813669    279122    32903    23593          25492  1174779
10  1870     942292    419921    45468    37393          33029  1478103
11  1880    1164673    599495    56559    51980          38991  1911698
12  1890    1441216    838547    87050    88908          51693  2507414
13  1900    1850093   1166582   152999   200507          67021  3437202
14  1910    2331542   1634351   284041   430980          85969  4766883
15  1920    2284103   2018356   469042   732016         116531  5620048
16  1930    1867312   2560401  1079129  1265258         158346  6930446
17  1940    1889924   2698285  1297634  1394711         174441  7454995
18  1950    1960101   2738175  1550849  1451277         191555  7891957
19  1960    1698281   2627319  1809578  1424815         221991  7781984
20  1970    1539233   2602012  1986473  1471701         295443  7894862
21  1980    1428285   2230936  1891325  1168972         352121  7071639
22  1990    1487536   2300664  1951598  1203789         378977  7322564
23  2000    1537195   2465326  2229379  1332650         443728  8008278
24  2010    1585873   2504700  2230722  1385108         468730  8175133
25  2015    1644518   2636735  2339150  1455444         474558  8550405
   Year  Manhattan  Brooklyn  Queens  Bronx  Staten Island   Total
0  1698       4937      2017     NaN    NaN            727    7681
1  1771      21863      3623     NaN    NaN           2847   28423
2  1790      33131      4549    6159   1781           3827   49447
3  1800      60515      5740    6642   1755           4563   79215
4  1810      96373      8303    7444   2267           5347  119734
--------------------------------------------------------------------------------
'''
