class Computador:
    def __init__(self, ram, cpu, sistema_operacional):
        self.ram = ram
        self.cpu = cpu
        self.sistema_operacional = sistema_operacional
        self.ligado = False

    def ligar(self):
        if not self.ligado:
            self.ligado = True
            print("O computador foi ligado.")
        else:
            print("O computador já está ligado.")

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
        print(f"Sistema Operacional: {self.sistema_operacional}")
        if self.ligado:
            print("Status: Ligado")
        else:
            print("Status: Desligado")


# Exemplo de Uso
if __name__ == "__main__":
    # Criando um objeto computador
    meu_computador = Computador(ram="8GB", cpu="Intel Core i5", sistema_operacional="Windows 10")

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
