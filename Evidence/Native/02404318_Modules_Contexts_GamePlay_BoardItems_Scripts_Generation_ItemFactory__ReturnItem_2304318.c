/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemFactory$$ReturnItem
void Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__ReturnItem (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory_o* __this, Modules_Infrastructure_Common_Scripts_Component_AItem_o* item, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemFactory$$ReturnItem
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__ReturnItem
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory_o* __this,
   Modules_Infrastructure_Common_Scripts_Component_AItem_o* item, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__ReturnItem_2304318
               (long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  int *piVar7;
  
  puVar1 = PTR_DAT_057ba368;
  if ((bRam0000000005c2a635 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ba368);
    FUN_012d0dc8(PTR_DAT_057b5500);
    FUN_012d0dc8(PTR_DAT_057cbd00);
    FUN_012d0dc8(PTR_DAT_05812770);
    bRam0000000005c2a635 = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if ((lVar2 != 0) &&
     (System_Action_object____ctor_1647468(lVar2,param_1,*(undefined8 *)PTR_DAT_05812770,0),
     param_2 != 0)) {
    Modules_Infrastructure_Common_Scripts_Component_AItem__remove_OnRecycled_40e9c34
              (param_2,lVar2,0);
    if (*(long *)(param_1 + 0x20) != 0) {
      Modules_Infrastructure_Common_Scripts_Component_AItem__SetParent_40e9f48
                (param_2,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0);
      if (cRam0000000005c230aa == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230aa = '\x01';
      }
      puVar5 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
      Modules_Infrastructure_Common_Scripts_Component_AItem__SetLocalPosition_40e9e74
                (*puVar5,puVar5[1],puVar5[2],param_2,0);
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (plVar3 = (long *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item_36d1354
                                     (*(long *)(param_1 + 0x18),*(undefined4 *)(param_2 + 0x18),
                                      *(undefined8 *)PTR_DAT_057b5500), plVar3 != (long *)0x0)) {
        lVar2 = *plVar3;
        uVar6 = (ulong)*(ushort *)(lVar2 + 0x12a);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_057cbd00) {
              puVar4 = (undefined8 *)(lVar2 + (long)(*piVar7 + 2) * 0x10 + 0x138);
              goto LAB_0240448c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_0131971c(plVar3,*(long *)PTR_DAT_057cbd00,2);
LAB_0240448c:
                    /* WARNING: Could not recover jumptable at 0x024044a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar4)(plVar3,param_2,puVar4[1]);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

