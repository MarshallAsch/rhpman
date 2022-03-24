# How to contribute

Welcome to the project, any contributions, improvemnts, modifications and additional feature additions are welcome to this module. 

## Testing

Like most software packages we have a handful of tests written for this module to help confirm its validity. 
There are both unit tests in the `test` directory and there are smoke tests in the `examples/tests` directory. 
Please write tests for any new code that gets added. 

## Submitting changes

Please send a [GitHub Pull Request](https://github.com/MarshallAsch/rhpman/pull/new/main) with a clear list of what you've done (read more about [pull requests](http://help.github.com/pull-requests/)).
When you send a pull request, we will love you forever if you include example simulations that show the new behaviour working as expected.
We can always use more test coverage. 
Please follow our coding conventions (below) and try to make your commits atomic (one feature per commit), and seperate documentation changes from functional changes.

Always write a clear log message for your commits. One-line messages are fine for small changes, but bigger changes should look like this:

    $ git commit -m "A brief summary of the commit
    > 
    > A paragraph describing what changed and its impact."

## Coding conventions

Start reading our code and you'll get the hang of it. We optimize for readability:

  * We indent using 4 spaces (soft tabs)
  * This is open source software. Consider the people who will read your code, and make it look nice for them. It's sort of like driving a car: Perhaps you love doing donuts when you're alone, but with passengers the goal is to make the ride as smooth as possible.
  * Try to create the implementation abstracted away from the actual ns3 simulation tool as much as possible so that this can be fairly easily modified to be extracted for other implementations. 


Thanks!
