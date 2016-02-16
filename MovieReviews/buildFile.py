import random

def main():
	reviewers = ["Tom Filmhead", "Sally MovieWatcher", "Fred PopcornLover"]
	movies = ["Jaws", "Holloween", "Vacation", "Animal House",
			  "Caddyshack", "Batman", "Spiderman", "Iron Man",
			  "Airplane", "Friday the 13th", "Red Storm",
			  "Elf Victory", "Running Man", "Truth",
			  "One Way Home", "Stars Above", "Smarth Robot",
			  "Alphabet", "Star Wars", "Star Trek", "Rudy"]

	f = open("reviews.txt", 'w')
	while (len(movies) > 0):
		r = random.randint(0,len(reviewers)-1);
		m = random.randint(0,len(movies)-1);
		stars = random.randint(1,5);
		f.write(reviewers[r]+","+movies[m]+","+str(stars)+"\n");
		movies.remove(movies[m]);

	f.close();

main()
