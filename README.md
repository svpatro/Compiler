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

### Code Optimization:

