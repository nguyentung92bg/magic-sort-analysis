/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileSpriteSelectionContainer$$OnDestroy
void Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer__OnDestroy (Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileSpriteSelectionContainer$$OnDestroy
   void Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer__OnDestroy
   (Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer__OnDestroy_298d3ec
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  
  if ((bRam0000000005c2d7e0 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058030d8);
    FUN_012d0dc8(PTR_DAT_057c7a38);
    FUN_012d0dc8(PTR_DAT_057884f0);
    FUN_012d0dc8(PTR_DAT_0575dab0);
    bRam0000000005c2d7e0 = 1;
  }
  puVar6 = PTR_DAT_058030d8;
  puVar5 = PTR_DAT_057884f0;
  puVar4 = PTR_DAT_0575dab0;
  lVar7 = *(long *)(param_1 + 0x20);
  if (lVar7 != 0) {
    iVar8 = 0;
    do {
      if (*(int *)(lVar7 + 0x18) <= iVar8) {
        if (*(long *)(param_1 + 0x18) != 0) {
          plVar9 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
          lVar10 = *plVar9;
          lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar6);
          if (lVar7 != 0) {
            System_Action_object____ctor_1647468(lVar7,param_1,*(undefined8 *)puVar4,0);
            lVar7 = System_Delegate__Remove_23e3b70(lVar10,lVar7,0);
            if (lVar7 == 0) {
              *plVar9 = 0;
code_r0x012d0d74:
              if (iRam0000000005c3d478 != 0) {
                puVar1 = (ulong *)(((ulong)plVar9 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar3) {
                    *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              return;
            }
            uVar11 = *(undefined8 *)puVar6;
            lVar10 = thunk_FUN_01320d5c(lVar7,uVar11);
            if (lVar10 != 0) {
              *plVar9 = lVar10;
              uVar11 = *(undefined8 *)puVar6;
              lVar10 = thunk_FUN_01320d5c(lVar7,uVar11);
              if (lVar10 != 0) goto code_r0x012d0d74;
            }
                    /* WARNING: Subroutine does not return */
            FUN_012d1288(lVar7,uVar11);
          }
        }
        break;
      }
      lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar7,iVar8,*(undefined8 *)puVar5);
      if (lVar7 == 0) break;
      plVar9 = (long *)(lVar7 + 0x40);
      lVar10 = *plVar9;
      lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar6);
      if (lVar7 == 0) break;
      System_Action_object____ctor_1647468(lVar7,param_1,*(undefined8 *)puVar4,0);
      lVar7 = System_Delegate__Remove_23e3b70(lVar10,lVar7,0);
      if (lVar7 == 0) {
        lVar10 = 0;
        *plVar9 = 0;
      }
      else {
        uVar11 = *(undefined8 *)puVar6;
        lVar10 = thunk_FUN_01320d5c(lVar7,uVar11);
        if (lVar10 == 0) {
LAB_02a8d5b8:
                    /* WARNING: Subroutine does not return */
          FUN_012d1288(lVar7,uVar11);
        }
        *plVar9 = lVar10;
        uVar11 = *(undefined8 *)puVar6;
        lVar10 = thunk_FUN_01320d5c(lVar7,uVar11);
        if (lVar10 == 0) goto LAB_02a8d5b8;
      }
      FUN_012d0d74(plVar9,lVar10);
      lVar7 = *(long *)(param_1 + 0x20);
      iVar8 = iVar8 + 1;
    } while (lVar7 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

