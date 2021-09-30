import spacy
import re
from spacy.matcher import Matcher

if __name__ == "__main__":
    #Sanial execute this work by 4pm
    #Sanial finish this work by 4pm
    #Sanial this work should be done before 2pm
    #Sanial this work shall be done between 3-5pm
    #Complete this work with Kranti after 2pm

    text = "Sanial execute google cLoud project by 4 pm"
    text = re.sub('[^a-zA-Z0-9_-]', ' ', text)

    nlp = spacy.load('en_core_web_sm')
    doc = nlp(text)
    #for token in doc:
    #    print(token.text, token.pos_, token.dep_)

    pattern = [{'POS': 'NOUN',  'DEP': 'compound', 'OP': '?'},
               {'POS': 'PROPN', 'DEP': 'compound', 'OP': '?'},
               {'POS': 'NOUN',  'DEP': 'compound', 'OP': '?'},
               {'POS': 'PROPN', 'DEP': 'compound', 'OP': '?'},
               {'POS': 'NOUN', 'DEP': 'dobj'}]
    matcher = Matcher(nlp.vocab)
    matcher.add('matching', [pattern])
    matches = matcher(doc)

    task_list = []
    for match_id, start, end in matches:
        string_id = nlp.vocab.strings[match_id]
        span = doc[start:end]
        #print(span.text)
        task_list.append(span.text)
    print(task_list)
    task_list.sort()
    print(task_list)