/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Selection$$CompleteSelection
void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection__CompleteSelection (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Selection$$CompleteSelection
   void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection__CompleteSelection
   (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection__CompleteSelection_1612c7c
               (long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  int iVar7;
  long *plVar8;
  
  if ((bRam0000000005c24481 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05808e00);
    bRam0000000005c24481 = 1;
  }
  plVar8 = *(long **)(param_1 + 0x40);
  *(undefined1 *)(param_1 + 0x38) = 1;
  if (plVar8 != (long *)0x0) {
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_05808e00) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 5) * 0x10 + 0x138);
          goto LAB_01712d10;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0131971c(plVar8,*(long *)PTR_DAT_05808e00,5);
LAB_01712d10:
    (*(code *)*puVar2)(plVar8,puVar2[1]);
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar4 != 0) {
      if ((bRam0000000005c3091c & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_05774380,0);
        FUN_012d0dc8(PTR_DAT_05802430);
        bRam0000000005c3091c = 1;
      }
      puVar1 = PTR_DAT_05802430;
      lVar3 = *(long *)(lVar4 + 0x20);
      if (lVar3 != 0) {
        iVar7 = 0;
        do {
          if (*(int *)(lVar3 + 0x18) <= iVar7) {
            return;
          }
          plVar8 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                     (lVar3,iVar7,*(undefined8 *)puVar1);
          if (plVar8 == (long *)0x0) break;
          if ((char)plVar8[8] == '\0') {
            (**(code **)(*plVar8 + 0x2f8))(plVar8,*(undefined8 *)(*plVar8 + 0x300));
          }
          lVar3 = *(long *)(lVar4 + 0x20);
          iVar7 = iVar7 + 1;
        } while (lVar3 != 0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

