
import pandas as pd
# from pandas import DataFrame as df
# from pandas import DataFrame 
# import numpy as np
# arr=np.array([1,2,4,5,8,10])
# arr1=np.array([3,6,9,12,15,18])
# data=pd.DataFrame([arr,arr1])               # dataframe class tells the rows and columns of the array by creating a structured format .
# print(data)


# jai sia ramm
df=pd.read_csv("/Users/Shivay hindwani/OneDrive/Documents/namanshivay.csv")         # reading file in pandas using absolute path 
# data=df.dropna()
# print(df.isnull())  #   checking null values in csv file
# print(df.head(1))     # head functions shows the mentioned rows of the csv file .
# print(df['age'])        # can ask for particular columns .
# print(df['name'])
# sum=0
# for i in df['age']:             # can use loop  in dataframe as per our convenience 
#     sum+=i
# print(sum//len(df['age']))
print(df['name'].unique())     #unique function return the unique value of the speicified columns
print(df['name'].nunique())    # nunique function return the total no. of unique value of the speicified columns.





        
    




     











