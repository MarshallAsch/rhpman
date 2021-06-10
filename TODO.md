# TODO

  - Establish original data items and their owner nodes.
    Default should be that 10% of nodes are owners of original data items.
  - Figure out how to query number of nodes within $h$ and $h_r$ hops
  - Figure out to how to query number of direct neighbor nodes.
  - Determine how nodes should decide which data they want.



# Things not addressed

- for the `U_cdc` it seems like it keeps track of the value for the change in the
  number of neighbor nodes per data item. This seems unreasonable that each node 
  would be able to store that information because it would not know what data items
  are wanted by the peer nodes. 
- how many data items actually are there?
