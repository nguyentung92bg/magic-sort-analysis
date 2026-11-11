/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseItem$$OnInitialize
void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseItem__OnInitialize (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseItem$$OnInitialize
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseItem__OnInitialize
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseItem__OnInitialize_2757238
               (long param_1)

{
  ulong *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  
  if ((bRam0000000005c2c729 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ffd10);
    FUN_012d0dc8(PTR_DAT_058107b8);
    FUN_012d0dc8(PTR_DAT_05800018);
    FUN_012d0dc8(PTR_DAT_057fd598);
    FUN_012d0dc8(PTR_DAT_057dbb18);
    bRam0000000005c2c729 = 1;
  }
  plVar6 = *(long **)(param_1 + 0x20);
  if (plVar6 != (long *)0x0) {
    lVar7 = *(long *)PTR_DAT_057ffd10;
    bVar2 = *(byte *)(lVar7 + 300);
    if ((bVar2 <= *(byte *)(*plVar6 + 300)) &&
       (*(long *)(*(long *)(*plVar6 + 200) + ((ulong)bVar2 - 1) * 8) == lVar7)) {
      *(long **)(param_1 + 0x48) = plVar6;
      if ((bVar2 <= *(byte *)(*plVar6 + 300)) &&
         (*(long *)(*(long *)(*plVar6 + 200) + ((ulong)bVar2 - 1) * 8) == lVar7)) goto LAB_0285730c;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(plVar6,lVar7);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
LAB_0285730c:
  puVar5 = PTR_DAT_057fd598;
  FUN_012d0d74();
  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
  puVar5 = PTR_DAT_057dbb18;
  if (lVar7 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar7,*(undefined8 *)PTR_DAT_05800018);
    *(long *)(param_1 + 0x58) = lVar7;
    FUN_012d0d74((long *)(param_1 + 0x58),lVar7);
    lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
    if (lVar7 != 0) {
      System_Collections_Generic_List_object____ctor_21fc1fc(lVar7,*(undefined8 *)PTR_DAT_058107b8);
      plVar6 = (long *)(param_1 + 0x60);
      *plVar6 = lVar7;
      if (iRam0000000005c3d478 != 0) {
        puVar1 = (ulong *)(((ulong)plVar6 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar6 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

