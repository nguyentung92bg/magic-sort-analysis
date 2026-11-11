/* IL2CPP: Modules.Contexts.Application.AppUpdateConfigModel$$IsValid
bool Modules_Contexts_Application_AppUpdateConfigModel__IsValid (Modules_Contexts_Application_AppUpdateConfigModel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.AppUpdateConfigModel$$IsValid
   bool Modules_Contexts_Application_AppUpdateConfigModel__IsValid
   (Modules_Contexts_Application_AppUpdateConfigModel_o* __this, const MethodInfo* method); */

uint Modules_Contexts_Application_AppUpdateConfigModel__IsValid_3e25200(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = System_String__IsNullOrEmpty_1ed04ac(*(undefined8 *)(param_1 + 0x20),0);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  uVar1 = System_String__IsNullOrEmpty_1ed04ac(*(undefined8 *)(param_1 + 0x28),0);
  return ~uVar1 & 1;
}

