/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileSpriteSelectionContainer$$SelectWithNoRule
void Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer__SelectWithNoRule (Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer_o* __this, System_String_o* id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.UI.Profile.Scripts.ProfileSpriteSelectionContainer$$SelectWithNoRule
   void Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer__SelectWithNoRule
   (Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer_o* __this,
   System_String_o* id, const MethodInfo* method); */

void Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer__SelectWithNoRule_298d708
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  
  if ((bRam0000000005c2d7e3 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c7a38);
    FUN_012d0dc8(PTR_DAT_057884f0);
    bRam0000000005c2d7e3 = 1;
  }
  Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer__UpdateSelection_298d88c
            (param_2,*(undefined8 *)(param_1 + 0x18));
  puVar4 = PTR_DAT_057884f0;
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 != 0) {
    iVar8 = 0;
    do {
      if (*(int *)(lVar5 + 0x18) <= iVar8) {
        puVar7 = (undefined8 *)(param_1 + 0x28);
        *puVar7 = param_2;
                    /* try { // try from 02a8d7a8 to 02b8d7fb has its CatchHandler @ 02a8d7a8
                       catch() { ... } // from try @ 02a8d7a8 with catch @ 02a8d7a8
                       catch() { ... } // from try @ 02a8d860 with catch @ 02a8d7a8
                       catch() { ... } // from try @ 02a8d890 with catch @ 02a8d7a8
                       catch() { ... } // from try @ 02a8d90c with catch @ 02a8d7a8 */
        if (iRam0000000005c3d478 != 0) {
          puVar1 = (ulong *)(((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        return;
      }
      uVar6 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar5,iVar8,*(undefined8 *)puVar4);
      Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer__UpdateSelection_298d88c
                (param_2,uVar6);
      lVar5 = *(long *)(param_1 + 0x20);
      iVar8 = iVar8 + 1;
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

