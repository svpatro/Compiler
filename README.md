# Compiler

For this project, I am attempting to learn the in's and out's of compilers.

# How To Run

To compile the project, run `make compiler`

To run the project, run `./compiler`

# Documentation

In essense, a compiler has these elements: 

- Lexical Analysis
- Syntax Analysis
- Semantic Analysis
- Code Generation
- Code Optimization

# Terminology Breakdown:

### Lexical Analysis:

> To break down and categorizing language into its individual components. 

To be more specific: we search for keywords (aka "parsing"), translate the keywords into tokens (aka "tokenizing"), and analyze the tokens for meaningful actions. 

At this point, you are abstracting the sentence one level up into its constituent parts (e.g. a sentence transforms into a series of verbs, objects, nouns, etc.)

### Syntactic Analysis:

> The syntax of a language is the rules that one must obey when constructing sentences. Given a set of words, how can you formulate sentences (regardless of their meaning) given the rules of the language?

In English, we use `Subject -> Verb -> Object`

Example: `She (subject) planted (verb) seeds (object).`

Keep in mind, there does exist languages that follow other word orders. Subject-Verb-Object (SVO) agreement is the second most common word order, with the most common being the Subject-Object-Verb (SOV) word order.

Examples of SOV langauges: Hindi, Japanese, Latin, Ancient Greek, Korean, Turkish

Examples of SVO languages: Romance Langauges (English, Spanish, French, Italian, Portuguese), Chinese, Vietnamese, Thai, etc.


### Semantic Evaluation: 

> Syntax is the concept that concerns itself only where or not the sentence is valid for the grammar of the langauge. Symantics, however, is about whether the sentence has a valid meaning. 

In other words, syntax is concern about the stucture of the language whereas symantics is concern about whether the language makes sense. 

By reason, we can conclude that semantic evaluation is the process of determining whether the language makes sense in context. 

### Code Generation:

> Now that we know how the sentance is constructed, let's translate it to a machine-friendly language. 

The essence of compiling lies within code generation. How can we map one set of keywords in one language to another set of keywords in another language? This is the challenge that we face with code generation. 

### Code Optimization:

> You can express yourself in a variety of ways; However, Let's not beat around the bush here, we don't want your life story.

There are a million ways to overcomplicate the same thing. However, we don't have all day, so code optimization allows us to reduce the size of our code while still maintaining the same impact. To optimize, it is important that we understand the concept of computational complexity, aka big-O, big-Omega, or big-Theta notation. 

### Pragmatics, Morphology, Phonology (Bonus):

As a little linguistic bonus, I wanted to include the concepts of pragmatics, morphology, and phonology. Pragmatics is the study of how unique contexts can contribute to the meaning of the overall sentence. In the case of computer science, this would be known as the scope or the namespace. Morphology is the study of word structure and construction (i.e. syllables). This branch of linguistics concerns itself with roots and endings in languages. Finally, Phonology concerns itself with the sounds of the language (i.e. intonation or inflection). Indeed, the way your tongue situates itself when pronouncing a word can certainly be studied. 