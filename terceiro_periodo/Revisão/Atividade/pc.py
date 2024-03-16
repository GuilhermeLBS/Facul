class Computador:

    def __init__(self, ram, cpu, so):

        self.ram = ram
        self.cpu = cpu
        self.so = so
        self.ligado = False

    def ligar(self):
        if not self.ligado:
            self.ligado = True
            print("O computador foi ligado")
        else:
            print ("O computador ja esta ligado")

    def desligar(self):
        if self.ligado:
            self.ligado = False
            print("O computador foi desligado.")
        else:
            print("O computador já está desligado.")

    def sobre(self):
        print("===== Informações do Computador =====")
        print(f"Memória RAM: {self.ram}")
        print(f"CPU: {self.cpu}")
        print(f"Sistema Operacional: {self.so}")
        if self.ligado:
            print("Status: Ligado")
        else:
            print("Status: Desligado")


        
if __name__ == "__main__":
    # Criando um objeto computador
    meu_computador = Computador("8GB", "Intel Core i5", "Windows 10")

    # Verificando informações iniciais
    meu_computador.sobre()

    # Ligando o computador
    meu_computador.ligar()

    # Tentando ligar novamente
    meu_computador.ligar()

    # Verificando informações após ligar
    meu_computador.sobre()

    # Desligando o computador
    meu_computador.desligar()

    # Tentando desligar novamente
    meu_computador.desligar()

    # Verificando informações após desligar
    meu_computador.sobre()
