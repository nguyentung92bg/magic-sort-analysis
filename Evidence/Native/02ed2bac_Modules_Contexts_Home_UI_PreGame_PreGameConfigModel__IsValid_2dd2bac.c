/* IL2CPP: Modules.Contexts.Home.UI.PreGame.PreGameConfigModel$$IsValid
bool Modules_Contexts_Home_UI_PreGame_PreGameConfigModel__IsValid (Modules_Contexts_Home_UI_PreGame_PreGameConfigModel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.PreGame.PreGameConfigModel$$IsValid
   bool Modules_Contexts_Home_UI_PreGame_PreGameConfigModel__IsValid
   (Modules_Contexts_Home_UI_PreGame_PreGameConfigModel_o* __this, const MethodInfo* method); */

bool Modules_Contexts_Home_UI_PreGame_PreGameConfigModel__IsValid_2dd2bac(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
    return false;
  }
  lVar3 = *(long *)(lVar1 + 0x18);
  if (((((lVar3 != 0) && (lVar2 = *(long *)(lVar1 + 0x20), lVar2 != 0)) &&
       (lVar1 = *(long *)(lVar1 + 0x28), lVar1 != 0)) &&
      ((((*(long *)(lVar3 + 0x28) != 0 && (*(long *)(lVar3 + 0x30) != 0)) &&
        ((*(long *)(lVar3 + 0x38) != 0 &&
         ((*(long *)(lVar3 + 0x40) != 0 && (*(long *)(lVar2 + 0x28) != 0)))))) &&
       (*(long *)(lVar2 + 0x30) != 0)))) &&
     ((((*(long *)(lVar2 + 0x38) != 0 && (*(long *)(lVar2 + 0x40) != 0)) &&
       (*(long *)(lVar1 + 0x28) != 0)) &&
      ((*(long *)(lVar1 + 0x30) != 0 && (*(long *)(lVar1 + 0x38) != 0)))))) {
    return *(long *)(lVar1 + 0x40) != 0;
  }
  return false;
}

