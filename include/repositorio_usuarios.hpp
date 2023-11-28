#pragma once

#include <string>
#include <sstream>
#include <filesystem>
#include <fstream>

class RepositorioUsuarios {
public:
  void criar_usuario(const std::string email, const std::string senha,  std::string const nome_completo, const std::string tipo, std::string id_usuario = "default");

  void remover_usuario(std::string id_usuario);

  bool autenticar_login(std::string email, std::string senha);

  std::string identidade_usuario(std::string email);

  std::string dados_usuario(const std::string idUsuario);
private: 
  //std::string _currentPath = std::filesystem::current_path().string();
  std::string _authkeysPath = "../storage/authkeys.txt";
  std::string _filePath = "../storage/usuario.txt";
};