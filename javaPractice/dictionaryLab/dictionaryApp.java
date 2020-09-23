package dictionaryLab;

import java.util.Scanner;
import java.util.Collection;
import com.google.common.collect.ArrayListMultimap;
import com.google.common.collect.Multimap;

	public class dictionaryApp {
	
		public static void main(String[] args) {
	
			// create a scanner objec
			Scanner input = new Scanner(System.in);
			
			// create a TestScore object
			dictionary dictionaryObject = new dictionary();
			
			
			System.out.println("Please enter a keyword");
			dictionaryObject.setUserKeyword(input.nextLine());
			
			Multimap<String, String> DataStructure = ArrayListMultimap.create();

			for(DataSource words: DataSource.values()) {
				
				DataStructure.put(words.getWord(), words.getDefinition());
			}
			
			System.out.print("list of words in the dictionary: ");
			System.out.println(DataStructure.keySet());
			System.out.print("list of definitions in the dictionary: ");
			System.out.println(DataStructure.values());
			/*
			if(DataStructure.containsKey(dictionaryObject.getUserKeyword())) {
				System.out.print("got it: " 
								+ dictionaryObject.getUserKeyword()	
								+ DataStructure.get(dictionaryObject.getUserKeyword()));
			}else {
				System.out.println("sorry buddy");
			}*/
		}
	
	}
