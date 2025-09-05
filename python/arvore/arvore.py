


class Arvore:
    def __init__(self, data):
        self.data = data
        self.right = None
        self.left = None

    def add_child(self, data):
        if data == self.data:
            return

        if data < self.data:
            if self.left:
                self.left.add_child(data)
            else:
                self.left = Arvore(data)
        else:
            if self.right:
                self.right.add_child(data)
            else:
                self.right = Arvore(data)

    def crescente(self):
        elements = []

        # left visit
        if self.left:
            elements += self.left.crescente()

        #base node visit
        elements.append(self.data)

        if self.right:
            elements += self.right.crescente()

        return elements

    def decrescente(self):
        elements = []

        if self.right:
            elements += self.right.decrescente()

        elements.append(self.data)

        if self.left:
            elements += self.left.decrescente()

        return elements

    def search(self, val):
        if self.data == val:
            return True

        if val < self.data:
            if self.left:
                return self.left.search(val)
            else:
                return False
        else:
            if self.right:
                return self.right.search(val)
            else:
                return False

    def calculate_sum(self):

        total = self.data

        if self.left:
            total += self.left.calculate_sum()
        if self.right:
            total += self.right.calculate_sum()

        return total

    def find_min(self):
        if not self.left:
            return self.data
        return self.left.find_min()

    def find_max(self):
        if not self.right:
            return self.data
        return self.right.find_max()

    def delete(self, val):
        if val < self.data:
            if self.left:
                self.left = self.left.delete(val)
        elif val > self.data:
            if self.right:
                self.right = self.right.delete(val)
        else:
            if self.left is None and self.right is None:
                return None

            if self.left is None:
                return self.right
            if self.right is None:
                return self.left

            min_val = self.right.find_min()
            self.data = min_val
            self.right = self.right.delete(min_val)

        return self



a = Arvore(50)

a.add_child(25)
a.add_child(56)
a.add_child(267)
a.add_child(8)
a.add_child(10)
a.add_child(65)
print(a.search(51))

print(a.crescente())
print(a.decrescente())
print(a.calculate_sum())
print(a.find_min())
print(a.find_max())

a.delete(56)
print(a.crescente())
