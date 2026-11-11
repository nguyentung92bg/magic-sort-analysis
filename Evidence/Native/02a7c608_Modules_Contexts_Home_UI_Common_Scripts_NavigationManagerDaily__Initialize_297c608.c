/* IL2CPP: Modules.Contexts.Home.UI.Common.Scripts.NavigationManagerDaily$$Initialize
void Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily__Initialize (Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.Common.Scripts.NavigationManagerDaily$$Initialize
   void Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily__Initialize
   (Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily__Initialize_297c608
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x30);
    FUN_012d0d74();
    puVar4 = (undefined8 *)(param_1 + 0x40);
    *puVar4 = *(undefined8 *)(param_1 + 0x48);
    if (iRam0000000005c3d478 != 0) {
      puVar1 = (ulong *)(((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

