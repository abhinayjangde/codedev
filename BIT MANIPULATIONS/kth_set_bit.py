def is_kth_bit_set(n, k):

    return (n & (1 << k)) != 0

print(is_kth_bit_set(5, 3))  # True, because the 1st bit of 5 (00000101) is set
