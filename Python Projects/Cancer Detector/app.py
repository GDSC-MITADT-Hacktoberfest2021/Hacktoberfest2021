from flask import Flask,request,url_for,render_template,redirect
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from sklearn.linear_model import LogisticRegression
from sklearn.externals import joblib
from sklearn.model_selection import train_test_split
from sklearn.tree import DecisionTreeClassifier
from sklearn.neighbors import KNeighborsClassifier
from sklearn.discriminant_analysis import LinearDiscriminantAnalysis
from sklearn.naive_bayes import GaussianNB
from sklearn.svm import SVC
app=Flask(__name__)
@app.route("/")
def index():
   return render_template('index.html')
@app.route("/about",methods=['GET','POST'])
def about():
	return render_template('about.html')
@app.route("/pharma",methods=['GET','POST'])
def pharma():
	return render_template('op_bladder.html')
@app.route("/index",methods=['GET','POST'])
def about1():
	return render_template('index.html')
@app.route("/causes",methods=['GET','POST'])
def causes():
	return render_template('causes.html')
@app.route("/predict",methods=['GET','POST'])
def prediction():
	return render_template('prediction.html')
@app.route("/insurence",methods=['GET','POST'])
def insurence():
	if request.method == 'POST':
		age = request.form['age']
		sex = request.form['sex']
		bmi = request.form['bmi']
		child = request.form['child']
		smoker = request.form['smoker']
		income = request.form['income']
		
		

		# Clean the data by convert from unicode to float 
		sample_data = [age,sex,bmi,child,smoker,income]
		clean_data = [float(i) for i in sample_data]

		# Reshape the Data as a Sample not Individual Features
		ex1 = np.array(clean_data).reshape(1,-1)
		data = pd.read_csv('insure.csv')
		X = data.drop('claim',axis=1)
		Y=pd.DataFrame(data['claim'])
		X_train,X_test,Y_train,Y_test = train_test_split(X,Y,train_size=0.8,test_size=0.2,random_state=5)
		logistic_regression = LogisticRegression(multi_class='ovr')
		logistic_regression.fit(X_train,Y_train)
		a=logistic_regression.score(X_test,Y_test)
		example = pd.DataFrame([age,sex,bmi,child,smoker,income])
		example = example.transpose()
		pred=logistic_regression.predict(example)[0]
		if pred == 1:
			return redirect(url_for('output'))
		else:
			return render_template('output01.html',b='Individual is Not Eligible For Insaurance',c=a)
	return render_template('insurence.html')
@app.route("/breastcancer",methods=['GET','POST'])
def breastcancer():
	if request.method == 'POST':
		age = request.form['age']
		gender = request.form['gender']
		diagnosis = request.form['diagnosis']
		tumor = request.form['tumor']
		lymph = request.form['lymph']
		insito = request.form['insito']
		histologic = request.form['histologic']
		

		# Clean the data by convert from unicode to float 
		sample_data = [age,gender,diagnosis,tumor,lymph,insito,histologic]
		clean_data = [float(i) for i in sample_data]

		# Reshape the Data as a Sample not Individual Features
		ex1 = np.array(clean_data).reshape(1,-1)
		data = pd.read_csv('ubc_train_dataset.csv')
		X = data.drop('Stage',axis=1)
		Y=pd.DataFrame(data['Stage'])
		X_train,X_test,Y_train,Y_test = train_test_split(X,Y,train_size=0.8,test_size=0.2,random_state=5)
		knn = KNeighborsClassifier()
		knn.fit(X_train,Y_train)
		a=knn.score(X_test,Y_test)
		example = pd.DataFrame([age,gender,diagnosis,tumor,lymph,insito,histologic])
		example = example.transpose()
		pred=knn.predict(example)[0]
		if pred == 1:
			return redirect(url_for('output2'))
		# elif pred == 1:
		# 	return redirect(url_for('index'))
		# elif pred == 2:
		# 	return redirect(url_for('about'))
		# elif pred == 3:
		# 	return redirect(url_for('causes'))
		# else:
		# 	return redirect(url_for('bladder'))
		else:
			return render_template('output21.html',b='U dont have Breast cancer',c=a)
	return render_template('breastcancer.html')
@app.route("/cervical",methods=['GET','POST'])
def cervical():
	if request.method == 'POST':
		age = request.form['age']
		sexual = request.form['sexual']
		firstsex = request.form['firstsex']
		preg = request.form['preg']
		smokes = request.form['smokes']
		
		
		

		# Clean the data by convert from unicode to float 
		sample_data = [age,sexual,firstsex,preg]
		clean_data = [float(i) for i in sample_data]

		# Reshape the Data as a Sample not Individual Features
		ex1 = np.array(clean_data).reshape(1,-1)
		data = pd.read_csv('risk_factors_cervical_cancer.csv')
		X = data.drop('Biopsy',axis=1)
		Y=pd.DataFrame(data['Biopsy'])
		X_train,X_test,Y_train,Y_test = train_test_split(X,Y,train_size=0.8,test_size=0.2,random_state=5)
		dtree = DecisionTreeClassifier()
		dtree.fit(X_train,Y_train)
		a=dtree.score(X_test,Y_test)
		example = pd.DataFrame([age,sexual,firstsex,preg,smokes])
		example = example.transpose()
		pred=dtree.predict(example)[0]
		if pred == 1:
			return redirect(url_for('output3'))
		else:
			return render_template('output31.html',b='U dont have cervical cancer',c=a)
		
	
	return render_template('cervical.html')
@app.route("/output",methods=['GET','POST'])
def output():
	return render_template('output.html')
@app.route("/output1",methods=['GET','POST'])
def output1():
	return render_template('output1.html')
@app.route("/output2",methods=['GET','POST'])
def output2():
	return render_template('output2.html')
@app.route("/output3",methods=['GET','POST'])
def output3():
	return render_template('output3.html')
@app.route("/output01",methods=['GET','POST'])
def output01():
	return render_template('output01.html')
@app.route("/output11",methods=['GET','POST'])
def output11():
	return render_template('output11.html')
@app.route("/output21",methods=['GET','POST'])
def output21():
	return render_template('output21.html')
@app.route("/output31",methods=['GET','POST'])
def output31():
	return render_template('output31.html')
@app.route("/bladder",methods=['GET','POST'])
def bladder():
	if request.method == 'POST':
		age = request.form['age']
		bmi = request.form['bmi']
		glucose = request.form['glucose']
		insulin = request.form['insulin']
		homa = request.form['homa']
		leptin = request.form['leptin']
		adip = request.form['adip']
		resis = request.form['resis']
		mcp = request.form['mcp']
		

		# Clean the data by convert from unicode to float 
		sample_data = [age,bmi,glucose,insulin,homa,leptin,adip,resis,mcp]
		clean_data = [float(i) for i in sample_data]

		# Reshape the Data as a Sample not Individual Features
		ex1 = np.array(clean_data).reshape(1,-1)
		data = pd.read_csv('dataR2.csv')
		X = data.drop('Classification',axis=1)
		Y=pd.DataFrame(data['Classification'])
		X_train,X_test,Y_train,Y_test = train_test_split(X,Y,train_size=0.8,test_size=0.2,random_state=5)
		logistic_regression = LogisticRegression(multi_class='ovr')
		logistic_regression.fit(X_train,Y_train)
		a=logistic_regression.score(X_test,Y_test)
		example = pd.DataFrame([age,bmi,glucose,insulin,homa,leptin,adip,resis,mcp])
		example = example.transpose()
		pred=logistic_regression.predict(example)[0]
		if pred == 1:
			return redirect(url_for('output1'))
		else:
			return render_template('output11.html',b='u dont have bladder Cancer',c=a)
		
	return render_template('bladder.html')


	
	


		# ex1 = np.array([6.2,3.4,5.4,2.3]).reshape(1,-1)

		# Reloading the Model
		

	# return render_template('index.html', petal_width=petal_width,
	# 	sepal_width=sepal_width,
	# 	sepal_length=sepal_length,
	# 	petal_length=petal_length,
	# 	clean_data=clean_data,
	# 	result_prediction=result_prediction,
	# 	model_selected=model_choice)

if __name__=="__main__":
    app.run()
# if request.method == 'POST':
# 		age = request.form['age']
# 		bmi = request.form['bmi']
# 		glucose = request.form['glucose']
# 		insulin = request.form['insulin']
# 		homa = request.form['homa']
# 		leptin = request.form['leptin']
# 		adip = request.form['adip']
# 		resis = request.form['resis']
# 		mcp = request.form['mcp']
		

# 		# Clean the data by convert from unicode to float 
# 		sample_data = [age,bmi,glucose,insulin,homa,leptin,adip,resis,mcp]
# 		clean_data = [float(i) for i in sample_data]

# 		# Reshape the Data as a Sample not Individual Features
# 		ex1 = np.array(clean_data).reshape(1,-1)
# 		data = pd.read_csv('dataR2.csv')
# 		X = data.drop('Classification',axis=1)
# 		Y=pd.DataFrame(data['Classification'])
# 		X_train,X_test,Y_train,Y_test = train_test_split(X,Y,train_size=0.8,test_size=0.2,random_state=5)
# 		logistic_regression = LogisticRegression(multi_class='ovr')
# 		logistic_regression.fit(X_train,Y_train)
# 		a=logistic_regression.score(X_test,Y_test)
# 		example = pd.DataFrame([age,bmi,glucose,insulin,homa,leptin,adip,resis,mcp])
# 		example = example.transpose()
# 		pred=logistic_regression.predict(example)[0]
# 		if (result==1):
# 			return render_template('output.html')
# 		else:
# 			return render_template('index.html')